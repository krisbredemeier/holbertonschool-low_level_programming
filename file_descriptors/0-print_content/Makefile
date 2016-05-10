CC = gcc -c
CFLAGS = -Wall -Wextra -Werror -pedantic
FILES = 0-print_content.o

all: 0-print_content.c
	$(CC) $(CFLAGS) 0-print_content 0-print_content.c

0-print_content: 0-print_content.c
	$(CC) $(CFLAGS) 0-print_content.c

clean:
	rm -f 0-print_content.o

re: clean all
