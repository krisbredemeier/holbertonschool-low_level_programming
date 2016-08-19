CC=gcc
CFLAGS= -Wall -Werror -Wextra -pedantic
SOURCES=incline.c main.c
OBJECTS=
# print_stack.o
OBJECTS+=$(SOURCES:.c=.o)
EXECUTABLE=a.out

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@

.PHONY: clean
clean:
	$(RM) main $(SOURCES:.c=.o)
