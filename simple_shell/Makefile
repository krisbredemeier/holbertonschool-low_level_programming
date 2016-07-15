CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic
FILES = main.o
TARGET = main
SOURCES = main.c

all: $(TARGET)

0-print_content: $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET)

clean:
	rm -f $(FILES) $(TARGET)

re: clean all
