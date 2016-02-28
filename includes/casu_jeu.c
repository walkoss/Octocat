#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../octocat.h"

int	casu_jeu()
{
  char	*content_map;
  char 	maze[11][21];
  char 	choix;

  content_map = get_content_map("maps/map1");
  init_maze(content_map, maze);
  free(content_map);
  print_board(maze);
  choix = choix_direction();
  while (deplacement_choix(choix, get_index_joueur(maze, 'x'),
			   get_index_joueur(maze, 'y'), maze) == 1)
    {
      print_board(maze);
      choix = choix_direction();
    }
  rejouer();
  return (1);
}
