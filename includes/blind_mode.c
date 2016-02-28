#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../octocat.h"

void	print_maze_char2(char maze[11][21], int i, int j)
{
  if (maze[i][j] != VIDE)
    {
      if (maze[i][j] == FIN)
	my_putstr(SORTIE_BG);
      else if (maze[i][j] == MUR)
	my_putchar(' ');
      else
	my_putstr(JOUEUR_BG);
    }
  else
    my_putchar(' ');
}

void	print_board_blind(char maze[11][21])
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  logo('1');
  for (i = 0;i<11;i++)
    {
      my_putstr("\t\t\t\t\t");
      for (j = 0;j<21;j++)
	{
	  print_maze_char2(maze, i, j);
	}
      my_putchar(10);
    }
}

void	rejouer_blind()
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
    blind_mode();
  else
    {
      empty_buffer();
      main();
    }
}

int	blind_mode()
{
  char	*content_map;
  char 	maze[11][21];
  char 	choix;

  content_map = get_content_map("maps/map1");
  init_maze(content_map, maze);
  free(content_map);
  print_board_blind(maze);
  choix = choix_direction();
  while (deplacement_choix(choix, get_index_joueur(maze, 'x'),
			   get_index_joueur(maze, 'y'), maze) == 1)
    {
      print_board_blind(maze);
      choix = choix_direction();
    }
  rejouer_blind();
  return (1);
}
