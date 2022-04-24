##
## EPITECH PROJECT, 2021
## B-MUL-100-STG-1-1-myhunter-loic.muller
## File description:
## Makefile
##

all:
		@make -s -C ./game_files

clean:
	@rm -f clay

fclean: clean
	@make -s -C ./game_files fclean
	@make -s -C ./lib/my fclean
	@rm -f name

re:	fclean all

.PHONY:	all clean fclean re
