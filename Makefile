##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	$(shell find -name '*.c')

OBJ	=	$(SRC:.c=.o)

CC	=	gcc -l csfml-system -lcsfml-graphics -lcsfml-audio -lcsfml-window -g3 -I include

NAME    =       my_hunter

all:    $(NAME)

$(NAME):        $(OBJ)
	$(CC) -o $(NAME) $(OBJ)
	rm -f $(shell find -name '*.o')

clean:
	rm -f $(shell find -name '*~')  

fclean: clean
	rm -f $(NAME)

re:     fclean all

.PHONY: all clean fclean re
