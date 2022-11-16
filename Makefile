sample_test : fx.h sample.c fx.c
	cc test.c sample.c fx.c -o sample_test

check: sample_test
	echo "hejsan"
	./sample_test
	./sample_test -t abc,def 

dist: sample
	gzip sample
	
sample : fx.h sample.c fx.c
	cc main.c sample.c fx.c -o sample

distcheck: dist
	gunzip sample.gz
	./sample
