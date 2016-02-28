#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../octocat.h"

void	menu_map()
{
  logo('1');
  my_putstr("\n\n\t\t\t    -----------------------------------------------\n");
  my_putstr("\t\t\t    |                   [MENU]                    |\n");
  my_putstr("\t\t\t    |---------------------------------------------|\n");
  my_putstr("\t\t\t    |                                             |\n");
  my_putstr("\t\t\t    |               [1] - Map 1                   |\n");
  my_putstr("\t\t\t    |               [2] - Map 2                   |\n");
  my_putstr("\t\t\t    |               [3] - Map 3                   |\n");
  my_putstr("\t\t\t    |               [4] - Map 4                   |\n");
  my_putstr("\t\t\t    |               [5] - Map 5                   |\n");
  my_putstr("\t\t\t    |               [6] - Map 6                   |\n");
  my_putstr("\t\t\t    |                                             |\n");
  my_putstr("\t\t\t    |---------------------------------------------|\n\n");
}

char	check_map(char str1)
{
  while (str1 != '1' && str1 != '2' && str1 != '3'
	 && str1 != '4' && str1 != '5' && str1 != '6')
    {
      my_putstr("\nChoix incorrect !\n");
      menu_map();
      my_putstr("-> Votre choix ? : ");
      empty_buffer();
      str1 = getchar();
      my_putchar(10);
    }
  return (str1);
}

char	*choix_de_la_map()
{
  char str1;
  char *str2;
  char *str3;
  int i;

  i = 0;
  if ((str3 = malloc(sizeof(char) * 9)) == NULL)
    return (NULL);
  empty_buffer();
  my_putstr("\n\n\t\t\t\t       -> Faites votre choix: ");
  str1 = getchar();
  check_map(str1);
  str2 = "maps/map";
  while (str2[i] != '\0')
    {
      str3[i] = str2[i];
      ++i;
    }
  str3[8] = str1;
  return (str3);
}

int	multimap_mode()
{
  char	*content_map;
  char  maze[11][21];
  char  choix;
  char	*map_choix;

  menu_map();
  map_choix = choix_de_la_map();
  content_map = get_content_map(map_choix);
  free(map_choix);
  free(content_map);
  init_maze(content_map, maze);
  print_board(maze);
  choix = choix_direction();
  while (deplacement_choix(choix, get_index_joueur(maze, 'x'),
			   get_index_joueur(maze, 'y'), maze) == 1)
    {
      print_board(maze);
      choix = choix_direction();
    }
  rejouer_mm();
  return (1);
}
