typedef int uc_t;

struct ustr;
struct ustr *ustr_fill(int fd);
void ustr_free(struct ustr *us);
int ustr_int(struct ustr *us, int *i);
int ustr_str(struct ustr *us, char *s, int len);
int ustr_uc_nospace(struct ustr *us, int *t);
int ustr_uc(struct ustr *us, int *t);
int ustr_skipws(struct ustr *us);
int ustr_eol(struct ustr *us);
int ustr_line(struct ustr *us, char *s, int len);
void ustr_back(struct ustr *us);
int ustr_pos(struct ustr *us);
void ustr_seek(struct ustr *us, int pos);

int uc_dec(uc_t *c, char *s);
int uc_enc(char *d, uc_t c);
