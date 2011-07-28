#define MAXSPECHARS 	512
#define MAXTOKENSIZE	128
#define CHARLIB		TBASE "/font/devutf/charlib"
#define UTFmax		3

extern FILE *fout, *ferr;

#define MAXFONT			128
#define MAXFONTNAME		256

extern int debug;
extern int fontsize;
extern int fontpos;
extern int resolution;	/* device resolution, goobies per inch */
extern int minx;		/* minimum x motion */
extern int miny;		/* minimum y motion */
extern char devname[];
extern int unitwidth;
extern int fontmnt;
extern char fontmtab[MAXFONT][MAXFONTNAME];

extern int curtrofffontid;	/* index into trofftab of current troff font */
extern int troffontcnt;

extern int drawflag;

struct specname {
	char *str;
	struct specname *next;
};

/* character entries for special characters (those pointed
 * to by multiple character names, e.g. \(mu for multiply.
 */
struct charent {
	char gname[32];		/* postscript glyph name */
	char name[16];		/* character name, e.g. \(mu */
	int charnum;		/* postscript font character number */
	short troffcharwidth;
	struct charent *next;
};

/* these entries map troff character code ranges to
 * postscript font and character ranges.
 */
struct psfent {
	int start;
	int end;
	int offset;
	int psftid;
};

struct troffont {
	char trfontid[MAXFONTNAME];	/* the common troff font name e.g., `R' */
	char psfontid[MAXFONTNAME];	/* the ps font name e.g, 'Times-Roman' */
	BOOLEAN special;		/* flag says this is a special font. */
	int spacewidth;
	struct charent *charent[NUMCHARS];
};

extern struct troffont troffontab[];

/** prototypes **/
void initialize(void);
void mountfont(int, char*);
int findtfn(char *, int);
void runeout(int c);
void specialout(char *);
long nametorune(char *);
void conv(struct ustr *us);
void hgoto(int);
void vgoto(int);
void hmot(int);
void vmot(int);
void draw(struct ustr *us);
void devcntl(struct ustr *us);
void error(int, char *, ...);
void loadfont(int, char *);
void flushtext(void);
void t_charht(int);
void t_slant(int);
void setpsfont(int, int);
void settrfont(void);
int hash(char *, int);
int readDESC(void);
void finish(void);
void ps_include(struct ustr *us, FILE *out, int, int,
	int, int, double, double, double, double,
	double, double, double);
void picture(struct ustr *us, char *);
void beginpath(char*, int);
void drawpath(char*, int);
