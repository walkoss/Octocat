#ifndef __OCTOCAT_H__
# define __OCTOCAT_H__

//Couleur
#define BACKGROUND "\033[40;38;5;82m"
#define BACKGROUND_NORMAL "\033[0m"
#define MUR_BG "\033[107m \033[0m"
#define SORTIE_BG "\033[103m \033[0m"
#define JOUEUR_BG "\033[104m \033[0m"

// Propriete de la map
#define VIDE ' '
#define MUR '#'
#define DEBUT '+'
#define FIN 'S'

// Prototypes
int     main();
void	my_putchar(char c);
void	my_putstr(char *str);
int 	menu();
char	*readLine();
int		casu_jeu();
int		hardcore_jeu();
char	*get_content_map(char *map);
void	init_maze(char *content_map, char maze[11][21]);
void	rejouer();
void 	rejouer_hardcore();
void 	empty_buffer();
void 	init_maze(char *content_map, char maze[11][21]);
void 	print_board(char maze[11][21]);
int 	left(int x, int y, char maze[11][21]);
int 	up(int x, int y, char maze[11][21]);
int 	down(int x, int y, char maze[11][21]);
int 	right(int x, int y, char maze[11][21]);
int 	get_index_joueur(char maze[11][21], char xy);
int		deplacement_choix(char choix, int x, int y, char maze[11][21]);
void 	empty_buffer();
char 	choix_direction();
char	*readLine();
int     blind_mode();
int 	octoview_mode();
int 	multimap_mode();
void 	rejouer_mm();
void	logo(char str);
void	display_menu();
void 	display_help();

#endif
