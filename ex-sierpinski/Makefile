.SILENT: test tidy
.PHONY: all clean compile test tidy

SHELL := /bin/bash
FILES=sierpinski
CC=clang
LDLIBS=-lm ./libcs1010.a
CFLAGS=@compile_flags.txt

all: compile tidy test

sierpinski: sierpinski.c
	$(CC) $(CFLAGS)    $^ $@-main.c $(LDLIBS) -o $@

compile: $(FILES)

test: $(FILES)
	for question in $(FILES); do ./test.sh $$question; done

format:
	clang-format -i *.c 2> /dev/null

tidy:
	clang-tidy -quiet *.c 2> /dev/null

clean:
	rm $(FILES)
# vim:noexpandtab
