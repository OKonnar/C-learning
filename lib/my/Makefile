##
## EPITECH PROJECT, 2021
## B-MUL-100-STG-1-1-myhunter-loic.muller
## File description:
## Makefile
##

NAME    =    libmy.a

SRC = $(shell find -name "*.c")

OBJ	  =		$(SRC:.c=.o)

RM    =		rm -f

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp libmy.h ../../include
	cp libstruct.h ../../include
	$(RM) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:    clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
