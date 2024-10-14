FILE:=${CFF}

all:
	cc -Wall -Wextra -lm -std=c99 -O2 $(FILE)  -o main

r: all
	./main
