sample : fx.h sample.c fx.c
	cc sample.c fx.c -o sample

check: sample
	echo "hejsan"
	./sample
	./sample tobias arwen och jesper

dist: sample
	gzip sample

distcheck: dist
	gunzip sample.gz
