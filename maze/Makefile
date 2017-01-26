CC=gcc
CFLAGS= -Wall -Werror -Wextra -pedantic 'sdl2-config --cflags'
SOURCES= main.c init_sdl.c poll_events.c bye_bye_SDL.c map.c
OBJECTS= $(SOURCES:.c=.o)
EXECUTABLE= amazing
SDL='sdl2-config --cflags'
RM= rm-f

all: $(SOURCES) $(EXECUTABLE)

$(OBJECTS): $(SOURCES)

$(EXECUTABLE): $(OBJECTS)
	$(CC) -o $(EXECUTABLE) $(OBJECTS) $(SDL)

clean:
	$(RM) $(OBJECTS) *~

fclean: clean
		$(RM) $(EXECUTABLE)

re: fclean all
