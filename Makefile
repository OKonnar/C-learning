##
## EPITECH PROJECT, 2021
## B-MUL-100-STG-1-1-myhunter-loic.muller
## File description:
## Makefile
##

NAME =	name

SRC = $(shell find -name "*.c")

OBJ	=	$(SRC:.c=.o)

CFLAGS = -g

all:	$(NAME)
		@gcc -g -o $(NAME) $(OBJ) $(LIB)
		@rm -f $(OBJ)

clean:
	@rm -f $(NAME)

$(NAME):	$(OBJ)

fclean: clean
	@rm -f *.
	@rm -f ~*

re:	fclean all

.PHONY:	all clean fclean re
