#define	NONE	0
#define	WARNING	1
#define	FATAL	2

typedef	int	BOOLEAN;

#define	TRUE	1
#define	FALSE	0

#define NUMCHARS	0x10000

extern char *programname;
extern char *inputfilename;
extern int inputlineno;

extern FILE *ferr, *fout;

extern int page_no;
extern int pages_printed;
extern int curpostfontid;
extern int hpos, vpos;

struct strtab {
	int size;
	char *str;
	int used;
};

extern struct strtab charcode[];
int pageon(void);
void endstring(void);
int isinstring(void);
void startpage(void);
void endpage(void);
int cat(char *);
void *galloc(void *, int, char *);
void pagelist(char *);
