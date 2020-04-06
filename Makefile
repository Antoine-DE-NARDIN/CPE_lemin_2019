##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

NAME = lem_in

SRC =	main.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -g3 -c $(SRC)
	gcc $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
