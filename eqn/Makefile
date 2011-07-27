CFLAGS = -Wall -O2
LDFLAGS =

all: eqn

%.o: %.c
	$(CC) -c $(CFLAGS) $^
eqn: main.o tuning.o diacrit.o eqnbox.o font.o fromto.o funny.o glob.o \
		integral.o input.o lex.o lookup.o mark.o matrix.o move.o \
		over.o paren.o pile.o shift.o size.o sqrt.o text.o eqn.o
	$(CC) -o $@ $^ $(LDFLAGS)

clean:
	rm -f *.o eqn
