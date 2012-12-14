include ../conf.mk

CFLAGS = -O2 -Wall -DTBASE=\"$(TBASE)\" -DDOROUND=1 \
	-DPROGNAME='"Troff - http://litcave.rudi.ir/"' -DPROGVER='"1.0"'
LDFLAGS = -lm

all: tr2ps

%.o: %.c
	@echo "CC -c $<"
	@$(CC) -c $(CFLAGS) $<
tr2ps: tr2ps.o chartab.o conv.o utils.o devcntl.o draw.o \
		readDESC.o ps_include.o pictures.o ustr.o \
		bbox.o glob.o request.o common.o misc.o
	@echo "CC -o $@"
	@$(CC) -o $@ $^ $(LDFLAGS)
clean:
	rm -f *.o tr2ps
