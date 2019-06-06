##
## EPITECH PROJECT, 2018
## 102architect
## File description:
## Makefile
##

CC	=	gcc

SRC	=	src/main.c	\
		src/gest_error.c	\
		src/print_description.c	\
		src/translation_scaling.c	\
		src/rotation_reflection.c	\
		src/rotation/rotation.c	\
		src/reflection/reflection.c

OBJ	=	$(SRC:.c=.o)

NAME	=	102architect

CFLAGS	=	-lm -W -Wall -Wextra -pedantic

CPPFLAGS	=	-I include

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(CPPFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
