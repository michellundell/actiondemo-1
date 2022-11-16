sample : fx.h sample.c fx.c
	cc sample.c fx.c -o sample

check: sample
	./sample

dist: sample
	gzip sample

distcheck: dist
	gunzip sample.gz
