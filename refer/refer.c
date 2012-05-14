/*
 * refer - a small refer clone
 *
 * Copyright (C) 2011-2012 Ali Gholami Rudi <ali at rudi dot ir>
 */
#include <ctype.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#define BUFSZ		(1 << 20)
#define NREFS		(1 << 10)

struct ref {
	char *keys[128];	/* reference keys */
	int id;			/* allocated reference id */
};

/* all references */
static struct ref refs[NREFS];
static int nrefs;

/* referred references */
static struct ref *added[NREFS];
static int nadded = 1;

static int multiref;		/* allow specifying multiple references */

#define ref_label(ref)		((ref)->keys['L'])

static int ref_add(char *label)
{
	int i;
	for (i = 0; i < nrefs; i++)
		if (ref_label(&refs[i]) && !strcmp(label, ref_label(&refs[i])))
			break;
	if (i == nrefs)
		return -1;
	if (!refs[i].id) {
		refs[i].id = nadded++;
		added[refs[i].id] = &refs[i];
	}
	return refs[i].id;
}

/* parse a refer-style bib file */
static int parserefs(char *s)
{
	char *beg, *end;
	struct ref *ref;
	while (*s) {
		ref = &refs[nrefs];
		while (isspace(*s))
			s++;
		while (*s != '\n') {
			beg = s;
			end = strchr(s, '\n');
			if (!end) {
				s = strchr(s, '\0');
				break;
			}
			*end = '\0';
			if (s[0] == '%' && s[1] >= 'A' && s[1] <= 'Z') {
				char *r = s + 2;
				while (isspace(*r))
					r++;
				ref->keys[(unsigned) s[1]] = r;
			}
			s = end + 1;
			while (*s == ' ' || *s == '\t')
				s++;
		}
		nrefs++;
	}
	return 0;
}

int xread(int fd, char *buf, int len)
{
	int nr = 0;
	while (nr < len) {
		int ret = read(fd, buf + nr, len - nr);
		if (ret <= 0)
			break;
		nr += ret;
	}
	return nr;
}

int xwrite(int fd, char *buf, int len)
{
	int nw = 0;
	while (nw < len) {
		int ret = write(fd, buf + nw, len - nw);
		if (ret < 0)
			break;
		nw += ret;
	}
	return nw;
}

static char fields[] = "LTABRJDVNPITO";
static char fields_flag[] = "OP";
static char *kinds[] = {"Other", "Article", "Book", "In book", "Report"};

static int ref_kind(struct ref *r)
{
	if (r->keys['J'])
		return 1;
	if (r->keys['B'])
		return 3;
	if (r->keys['I'])
		return 2;
	if (r->keys['R'])
		return 4;
	return 0;
}

static char list[BUFSZ];

/* insert references */
static void ref_insert(int fd)
{
	int i, j;
	char *s = list;
	int kind;
	s += sprintf(s, "\n.]<\n");
	for (i = 1; i < nadded; i++) {
		s += sprintf(s, ".ds [F %d\n", i);
		s += sprintf(s, ".]-\n");
		kind = ref_kind(added[i]);
		for (j = 'A'; j <= 'Z'; j++) {
			char *val = added[i]->keys[j];
			if (!val && !strchr(fields, j))
				continue;
			s += sprintf(s, ".ds [%c %s\n", j, val ? val : "");
			if (strchr(fields_flag, j))
				s += sprintf(s, ".nr [%c 1\n", j);
		}
		s += sprintf(s, ".][ %d %s\n", kind, kinds[kind]);
	}
	s += sprintf(s, ".]>");
	xwrite(fd, list, s - list);
}

/* strcpy from s to d; ignore the initial jump chars and stop at stop chars */
static void cut(char *d, char *s, char *jump, char *stop)
{
	while (strchr(jump, *s))
		s++;
	while (*s && !strchr(stop, *s))
		*d++ = *s++;
	*d = '\0';
}

static int intcmp(void *v1, void *v2)
{
	return *(int *) v1 - *(int *) v2;
}

/* replace .[ .] macros with reference numbers */
static void seen_ref(int fd, char *b, char *e)
{
	char msg[128];
	char label[128];
	char *s, *r;
	int id[128];
	int nid = 0;
	int i;
	s = strchr(b, '\n') + 1;
	while (!nid || multiref) {
		r = label;
		while (s < e && isspace(*s))
			s++;
		while (s < e && !isspace(*s))
			*r++ = *s++;
		*r = '\0';
		if (s >= e)
			break;
		if (!strcmp("$LIST$", label)) {
			ref_insert(fd);
			break;
		}
		id[nid] = ref_add(label);
		if (id[nid] < 0)
			fprintf(stderr, "refer: <%s> not found\n", label);
		else
			nid++;
	}
	/* reading characters after .[ */
	cut(msg, b + 2, "", "\n");
	/* sorting references for better reference intervals */
	qsort(id, nid, sizeof(id[0]), intcmp);
	i = 0;
	while (i < nid) {
		int beg = i++;
		/* reading reference intervals */
		while (i < nid && id[i] == id[i - 1] + 1)
			i++;
		if (beg)
			sprintf(msg + strlen(msg), ",");
		if (beg == i - 1)
			sprintf(msg + strlen(msg), "%d", id[beg]);
		else
			sprintf(msg + strlen(msg), "%d%s%d",
				id[beg], beg < i - 2 ? "\\-" : ",", id[i - 1]);
	}
	/* reading characters after .] */
	cut(msg + strlen(msg), e + 2, "", "\n");
	xwrite(fd, msg, strlen(msg));
}

static void refer(int fd, char *s)
{
	char *l = s;
	char *b, *e;
	while (*s) {
		char *r = strchr(s, '\n');
		if (!r)
			break;
		if (r[1] == '.' && r[2] == '[') {
			b = strchr(r + 1, '\n');
			e = strchr(b + 1, '\n');
			while (e && (e[1] != '.' || e[2] != ']'))
				e = strchr(e + 1, '\n');
			if (!e)
				break;
			xwrite(fd, l, r - l);
			s = strchr(e + 1, '\n');
			l = s;
			seen_ref(fd, r + 1, e + 1);
		}
		s = r + 1;
	}
	xwrite(fd, l, strchr(l, '\0') - l);
}

static char buf[BUFSZ];
static char bib[BUFSZ];

int main(int argc, char *argv[])
{
	char *bfile = NULL;
	int i = 0;
	while (++i < argc) {
		if (!strcmp("-m", argv[i]))
			multiref = 1;
		if (argv[i][0] == '-' && argv[i][1] == 'p')
			bfile = argv[i][2] ? argv[i] + 2 : argv[++i];
	}
	if (bfile) {
		int fd = open(bfile, O_RDONLY);
		xread(fd, bib, sizeof(bib) - 1);
		parserefs(bib);
		close(fd);
	}
	xread(0, buf, sizeof(buf) - 1);
	refer(1, buf);
	return 0;
}
