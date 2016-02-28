CC   =	gcc

NAME =	octocat

SRC  =	includes/my_putchar.c			\
		includes/my_putstr.c 			\
		includes/menu.c 				\
		includes/casu_jeu.c 			\
		includes/get_content_map.c 		\
		includes/hardcore_jeu.c 		\
		includes/rejouer.c 				\
		includes/readline.c 			\
		includes/direction_joueur.c 	\
		includes/blind_mode.c 			\
		includes/octoview_mode.c 		\
		includes/fonction_players.c		\
		includes/maze_functions.c 		\
		includes/multimap_mode.c 		\
		includes/ascii/display_ascii.c 	\
		includes/ascii/display_help.c 	\
		main.c

OBJ = $(SRC:%.c=%.o)

RM  = rm -f

CFLAGS = -W -Wall -Wextra -Werror

$(NAME) :	$(OBJ)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

all:	$(NAME)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:	fclean all
