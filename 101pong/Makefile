##
## EPITECH PROJECT, 2018
## pong.c
## File description:
## Makefile
##

CC	=	gcc

SRC	=	pong.c

OBJ	=	$(SRC:.c=.o)

NAME	=	101pong

CFLAGS	=	-lm -W -Wall -Wextra -pedantic

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
