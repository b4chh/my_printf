##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## makefile
##

SRC	=	src/my_printf.c	\
		src/my_putchar.c	\
		src/my_putstr.c	\
		src/my_put_nbr.c	\
		src/my_put_nbr_binar.c	\
		src/my_put_nbr_octale.c	\
		src/my_put_nbr_hexa.c	\
		src/my_put_hexa.c \
		src/my_put_nbr_u.c \
		src/my_puts.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

