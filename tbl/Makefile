CFLAGS = -Wall -O2
LDFLAGS =

OBJS = t8.o t4.o t6.o tu.o t5.o t7.o tv.o tg.o t3.o tb.o tt.o t9.o t1.o \
	tf.o tc.o ti.o tm.o t0.o tr.o te.o ts.o t2.o

all: tbl
%.o: %.c
	$(CC) -c $(CFLAGS) $<
tbl: $(OBJS)
	$(CC) -o $@ $(OBJS) $(LDFLAGS)

clean:
	rm -f *.o tbl
