CC=gcc
CFLAGS= -Wall -Werror -Wextra -pedantic -g
SOURCES=main.c ntree_insert.c path_exists.c ntree_free.c
OBJECTS= free_str_array.o ntree_print.o string_split.o
OBJECTS+=$(SOURCES:.c=.o)
EXECUTABLE=a.out

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@

.PHONY: clean
clean:
	$(RM) main $(SOURCES:.c=.o)
