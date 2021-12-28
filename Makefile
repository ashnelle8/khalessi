##
## EPITECH PROJECT, 2021
## 
## File description:
## 
##

SRC	=	circle_main.c	\
		draw_circle.c	\
		framebuffer.c	\
		draw_square.c	\
		main.c	\
		ronds_apparaissant.c	\
		carre_apparaissant.c	\
		carre_main.c	\
		pointilles_apparaissants.c	\
		pointilles_main.c	\
		lignes_apparaissantes.c	\
		lignes_main.c	\
		usage.c	\
		my_putstr.c	\
		my_putchar.c	\
		faits.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_screensaver

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -l csfml-graphics -lm -l csfml-audio -l csfml-system -l csfml-network -l csfml-audio -g3 

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:	fclean all
