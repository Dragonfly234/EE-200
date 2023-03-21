CFLAGS:=-std=gnu99
all: log summarize

log: problem1.c
	gcc $(CFLAGS) problem1.c -o log
summarize:
	gcc $(CFLAGS) problem2.c -o summarize
clean: 
	rm log summarize activity.tsv
