PROGRAM = chample
OBJS = main.o coordcube.o cubiecube.o facecube.o kttools.o search.o scramble.o
CC = gcc
CFLAGS = -Wall -O3

.SUFFIXES: .c .o

.PHONY: all
all: $(PROGRAM)

$(PROGRAM): $(OBJS)
	$(CC) -o $(PROGRAM) $^

.c.o:
	$(CC) $(CFLAGS) -c $<

.PHONY: clean
clean:
	$(RM) $(PROGRAM) $(OBJS)
