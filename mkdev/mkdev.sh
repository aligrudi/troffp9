#!/bin/sh

# path of troff data directory
TBASE="../home"
DEV="utf"

DST=$TBASE/font/dev$DEV

. $DST/shell.lib
ALL=`AllTables`
for f in $ALL
do
	echo $f
	sh trofftable.sh -D$TBASE/ps/prologues/dpost.ps -L./trofftable.ps \
			-F$TBASE/font -T$DEV $f >out.ps
	ps2pdf out.ps >$DST/$f
done

rm out.ps out.pdf
