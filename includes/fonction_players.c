#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../octocat.h"

int	get_index_joueur(char maze[11][21], char xy)
{
  int	i;
  int	j;

  for (i = 0; i < 11; i++)
    {
      for (j = 0; j < 21; j++)
	{
	  if (maze[i][j] == '+')
	    {
	      if (xy == 'x')
		return (i);
	      else
		return (j);
	    }
	}
    }
  return (0);
}

int	deplacement_choix(char choix, int x, int y, char maze[11][21])
{
  int	(*choix_fonction[119]) (int x, int y, char maze[11][21]);

  choix_fonction[96] = &left;
  choix_fonction[118] = &up;
  choix_fonction[114] = &down;
  choix_fonction[99] = &right;
  return (choix_fonction[choix - 1](x, y, maze));
}

void	empty_buffer()
{
  int	buff;

  buff = 0;
  while (buff != '\n' && buff != EOF)
      buff = getchar();
}

char	choix_direction()
{
  char	choix;

  empty_buffer();
  my_putstr("\n\n\t\t\t    -> Votre choix ? ('w', 'a', 's' ou 'd') : ");
  choix = getchar();
  while (choix != 97 && choix != 119 && choix != 115
	 && choix != 100)
    {
      my_putstr("\n\n\t\t\t    Choix incorrect: w, a, s ou d\n");
      my_putstr("\t\t            -> Votre choix ? : ");
      empty_buffer();
      choix = getchar();
      my_putchar(10);
    }
  my_putchar(10);
  return (choix);
}
