CFLAGS = -Wall -O2
LDFLAGS = -lm

all: pic
%.o: %.c
	$(CC) -c $(CFLAGS) $^
pic: picy.o picl.o main.o print.o misc.o symtab.o blockgen.o \
		boxgen.o circgen.o arcgen.o linegen.o movegen.o \
		textgen.o input.o for.o pltroff.o
	$(CC) -o $@ $^ $(LDFLAGS)

clean:
	rm -f *.o pic
