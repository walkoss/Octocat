#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../octocat.h"

void	init_maze2(char *content_map2, char maze[11][21])
{
  int	i;
  int	l;
  int	j;

  j = 0;
  l = 0;
  i = 0;
  while (l < 11)
    {
      j = 0;
      while (j < 21)
	{
	  maze[l][j] = content_map2[i];
	  ++j;
	  ++i;
	}
      ++l;
    }
}

void	init_maze(char *content_map, char maze[11][21])
{
  int	i;
  int	j;
  char	content_map2[231];

  i = 0;
  j = 0;
  while (content_map[i] != '\0')
    {
      if (content_map[i] != '\n')
	{
	  content_map2[j] = content_map[i];
	  j++;
	}
      i++;
    }
  init_maze2(content_map2, maze);
}

void	print_board(char maze[11][21])
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
	    my_putchar(maze[i][j]);
	}
      my_putchar(10);
    }
}
