CC = gcc
BINARY = maincode

# Rule for building the binary
$(BINARY): maincode.o libcode.o
	$(CC) -o $@ maincode.o libcode.o

# Rule for compiling maincode.o
maincode.o: maincode.c libcode.h
	$(CC) -c -o $@ $<

# Rule for compiling libcode.o
libcode.o: libcode.c libcode.h
	$(CC) -c -o $@ $<
