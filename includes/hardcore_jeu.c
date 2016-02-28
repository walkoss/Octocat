#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../octocat.h"

char	*get_choice_hardcore()
{
  char	*choix;
  int	i;

  i = 0;
  my_putstr("\n\n\t\t\t    Saisissez ci-dessous une chaine de caracteres\n");
  my_putstr("\n\n\t\t\t    -> Votre choix ? ('w', 'a', 's' ou 'd') : ");
  choix = readLine();
  while (choix[i] != '\0')
    {
      if (choix[i] != 'w' && choix[i] != 'a' && choix[i] != 's'
	  && choix[i] != 'd')
	{
	  my_putstr("\n\n\t\t\t    Choix incorrect !\n");
	  my_putstr("\n\n\t\t\t    Saisissez ci-dessous une chaine de caracteres\n");
	  my_putstr("\n\n\t\t\t    -> Votre choix ? ('w', 'a', 's' ou 'd') : ");
	  choix = readLine();
	  my_putchar(10);
	}
      i++;
    }
  return (choix);
}

int	boucle_hardcore_jeu(char maze[11][21])
{
  char	*choix;
  int	i;
  int	x;

  i = 0;
  if ((choix = malloc(sizeof(choix) * 1024)) == 0)
    return (0);
  choix = get_choice_hardcore();
  while (choix[i] != '\0')
    {
      x = get_index_joueur(maze, 'x');
      print_board(maze);
      usleep(50000);
      if (deplacement_choix(choix[i], x, get_index_joueur(maze, 'y')
        , maze) != 1)
	{
	  free(choix);
	  return (1);
	}
      ++i;
    }
  print_board(maze);
  my_putstr("\n\n\t\t\t\t\t  Vous avez perdu !");
  free(choix);
  return (1);
}

int	hardcore_jeu()
{
  char	*content_map;
  char	maze[11][21];

  content_map = get_content_map("maps/map1");
  init_maze(content_map, maze);
  free(content_map);
  print_board(maze);
  boucle_hardcore_jeu(maze);
  rejouer_hardcore();
  return (1);
}
