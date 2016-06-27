utils=$(wildcard *.c)

all: $(utils)
	gcc -o $@ $^