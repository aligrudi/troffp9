include ../conf.mk

CFLAGS = -Wall -O2 -DSTRICT -DUNICODE -DTBASE=\"$(TBASE)\"
LDFLAGS =

all: troff
%.o: %.c
	$(CC) -c $(CFLAGS) $^
troff: n1.o n2.o n3.o n4.o n5.o n6.o t6.o n7.o n8.o n9.o t10.o n10.o t11.o \
		ni.o hytab.o suftab.o
	$(CC) -o $@ $^ $(LDFLAGS)

clean:
	rm -f *.o troff
