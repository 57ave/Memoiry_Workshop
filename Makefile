##
## EPITECH PROJECT, 2023
## Memory_Workshop
## File description:
## Makefile
##

MAIN	=	sources/main.c 		\

SRC		=	sources/my_malloc.c \

OBJ		=	$(MAIN:.c=.o) $(SRC:.c=.o)

NAME	=	my_malloc

CFLAGS	=	-Wall -Wextra -g3
CPPFLAGS=	-iquote./includes

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(CPPFLAGS)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re