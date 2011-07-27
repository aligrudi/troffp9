#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "ustr.h"

#define MAXFLEN		(1 << 20)

struct ustr {
	char buf[MAXFLEN];
	int len;
	int cur;
};

int uc_dec(uc_t *dst, char *src)
{
	int l = 1;
	char *s = src;
	if (~*s & 0xc0) {
		*dst = *s;
		return 1;
	}
	while (l < 6 && *s & (0x40 >> l))
		l++;
	*dst = (0x3f >> l) & *s++;
	while (l--)
		*dst = (*dst << 6) | (*s++ & 0x3f);
	return s - src;
}

int uc_enc(char *d, uc_t c)
{
	int n, l;
	if (c > 0xffff) {
		*d++ = 0xf0 | (c >> 18);
		l = 3;
	} else if (c > 0x7ff) {
		*d++ = 0xe0 | (c >> 12);
		l = 2;
	} else if (c > 0x7f) {
		*d++ = 0xc0 | (c >> 6);
		l = 1;
	} else {
		*d++ = c;
		l = 0;
	}
	n = l + 1;
	while (l--)
		*d++ = 0x80 | (c >> (l * 6)) & 0x3f;
	return n;
}

struct ustr *ustr_fill(int fd)
{
	struct ustr *us = malloc(sizeof(*us));
	int nr = 0;
	int cr = 0;
	while ((cr = read(fd, us->buf + nr, MAXFLEN - nr)) > 0)
		nr += cr;
	us->len = nr;
	us->cur = 0;
	return us;
}

void ustr_free(struct ustr *us)
{
	free(us);
}

int ustr_int(struct ustr *us, int *i)
{
	int n = 0;
	int base = 10;
	int neg = 0;
	char *s, *e = us->buf + us->len;
	int len;
	ustr_skipws(us);
	s = us->buf + us->cur;
	if (*s == '-')
		neg = 1;
	if (*s == '-' || *s == '+')
		s++;
	if (s[0] == '0') {
		base = 8;
		if (tolower(s[1]) == 'x')
			base = 16;
		s += base == 8 ? 1 : 2;
	}
	while (s < e) {
		if (*s >= '0' && *s <= '9')
			n = n * base + *s - '0';
		else if (base == 16 && tolower(*s) >= 'a' && tolower(*s) <= 'f')
			n = n * base + 10 + tolower(*s) - 'a';
		else
			break;
		s++;
	}
	*i = neg ? -n : n;
	len = s - (us->buf + us->cur);
	us->cur += len;
	return us->cur < us->len ? len : -1;
}

int ustr_str(struct ustr *us, char *s, int len)
{
	int i = 0;
	ustr_skipws(us);
	while (i < len && us->cur < us->len && !isspace(us->buf[us->cur]))
		s[i++] = us->buf[us->cur++];
	s[i] = '\0';
	return us->cur < us->len ? i : -1;
}

int ustr_uc_nospace(struct ustr *us, uc_t *t)
{
	int len;
	ustr_skipws(us);
	if (us->cur >= us->len)
		return -1;
	len = uc_dec(t, us->buf + us->cur);
	us->cur += len;
	return len;
}

int ustr_uc(struct ustr *us, uc_t *t)
{
	int len;
	if (us->cur >= us->len)
		return -1;
	len = uc_dec(t, us->buf + us->cur);
	us->cur += len;
	return len;
}

int ustr_skipws(struct ustr *us)
{
	int c = us->cur;
	while (us->cur < us->len && isspace(us->buf[us->cur]))
		us->cur++;
	return us->cur - c;
}

int ustr_eol(struct ustr *us)
{
	int c = us->cur;
	while (us->cur < us->len && us->buf[us->cur] != '\n')
		us->cur++;
	if (us->cur < us->len)
		us->cur++;
	return us->cur - c;
}

int ustr_line(struct ustr *us, char *s, int len)
{
	int i = 0;
	while (i < len && us->cur < us->len && us->buf[us->cur] != '\n')
		s[i++] = us->buf[us->cur++];
	if (us->cur < us->len)
		us->cur++;
	s[i] = '\0';
	return i;
}

void ustr_seek(struct ustr *us, int pos)
{
	us->cur = pos;
}

int ustr_pos(struct ustr *us)
{
	return us->cur;
}

void ustr_back(struct ustr *us)
{
	us->cur--;
}
