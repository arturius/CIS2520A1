all: assignment1

assignment1: main.c carbon.c newton.c ackermann.c a1.h
	gcc -Wall -std=c99 -pedantic main.c carbon.c newton.c ackermann.c -o assignment1 -lm 

