CFLAGS = -Wall -O2
LDFLAGS = -lm

all: grap
%.o: %.c
	$(CC) -c $(CFLAGS) $^
grap: grap.o grapl.o main.o input.o print.o frame.o for.o \
		coord.o ticks.o plot.o label.o misc.o
	$(CC) -o $@ $^ $(LDFLAGS)

clean:
	rm -f *.o grap
