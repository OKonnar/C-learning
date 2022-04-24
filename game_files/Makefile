##
## EPITECH PROJECT, 2021
## B-MUL-100-STG-1-1-myhunter-loic.muller
## File description:
## Makefile
##

NAME =	name

SRC = $(shell find -name "*.c")

OBJ	=	$(SRC:.c=.o)

LIB = -L../lib/my -lmy

CFLAGS = -g

all:	$(NAME)
		@make -C ../lib/my
		@gcc -g -o $(NAME) $(OBJ) $(LIB)
		@mv $(NAME) ../
		@rm -f $(OBJ)

clean:
	@rm -f $(OBJ)

$(NAME):	$(OBJ)

fclean: clean
	@rm -f *.
	@rm -f ~*

re:	fclean all

.PHONY:	all clean fclean re
