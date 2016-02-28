#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../octocat.h"

void print_maze_char(char maze[11][21], int i, int j)
{
  if (maze[i][j] != VIDE)
    {
      if (maze[i][j] == FIN)
	my_putstr(SORTIE_BG);
      else if (maze[i][j] == MUR)
	my_putstr(MUR_BG);
      else
	my_putstr(JOUEUR_BG);
    }
  else
    my_putchar(' ');
}

void	print_board_octoview(char maze[11][21], int x, int y)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  logo('1');
  for (i = 0; i < 11 ; i++)
    {
      my_putstr("\t\t\t\t\t");
      for (j = 0; j < 21 ; j++)
	{
	  if (((i >= (x - 1) && i <= (x + 1)) && (j >= (y - 1) && j <= (y + 1))))
	    print_maze_char(maze, i, j);
	  else
	    my_putchar(' ');
	}
      my_putchar(10);
    }
}

void	rejouer_octoview()
{
  char	choix;

  empty_buffer();
  my_putstr("\n\n\t\t\t    -> Rejouer ? (o/n) : ");
  choix = getchar();
  while (choix != 110 && choix != 111)
    {
      my_putstr("\n\n\t\t\t    Choix incorrect: 'o' ou 'n'\n");
      my_putstr("\t\t            -> Votre choix ? : ");
      empty_buffer();
      choix = getchar();
      my_putchar(10);
    }
  my_putchar(10);
  if (choix == 'o')
    octoview_mode();
  else
    {
      empty_buffer();
      main();
    }
}

int	octoview_mode()
{
  char	*content_map;
  char 	maze[11][21];
  char	choix;

  content_map = get_content_map("maps/map1");
  init_maze(content_map, maze);
  free(content_map);
  print_board_octoview(maze, get_index_joueur(maze, 'x'),
		       get_index_joueur(maze, 'y'));
  choix = choix_direction();
  while (deplacement_choix(choix, get_index_joueur(maze, 'x'),
			   get_index_joueur(maze, 'y'), maze) == 1)
    {
      print_board_octoview(maze, get_index_joueur(maze, 'x'),
			   get_index_joueur(maze, 'y'));
      choix = choix_direction();
    }
  rejouer_octoview();
  return (1);
}
