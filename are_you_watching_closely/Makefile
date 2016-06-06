CC = gcc
CFLAGS = -Werror -Wextra -Wall -pedantic
SRC = printf.c
OBJ = $(SRC:.c=.o)
DEPS = myfunctions.h
NAME = libprintf.a
RM = rm -f

all: $(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re: fclean all
