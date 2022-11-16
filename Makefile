sample : fx.h sample.c fx.c
	cc test.c sample.c fx.c -o sample

check: sample
	echo "hejsan"
	./sample
	./sample -t abc,def 

dist: sample
	gzip sample

distcheck: dist
	gunzip sample.gz
