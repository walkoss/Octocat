#include <stdio.h>
#include "../octocat.h"

int	help()
{
  my_putstr("\033[1;1H\033[2J");
  display_help();
  return (1);
}

int	menu_choix(char choix)
{
  int	(*choix_fonction[7]) ();

  choix_fonction[1] = &casu_jeu;
  choix_fonction[2] = &hardcore_jeu;
  choix_fonction[3] = &blind_mode;
  choix_fonction[4] = &octoview_mode;
  choix_fonction[5] = &multimap_mode;
  choix_fonction[6] = &help;
  choix_fonction[choix - 48]();
  return (1);
}

int	menu()
{
  char	choix;

  display_menu();
  choix = getchar();
  while (choix != '1' && choix != '2' && choix != '3' && choix != '4'
	 && choix != '5' && choix != '6' && choix != '7' && choix != '8')
    {
      my_putstr("\nChoix incorrect: 1, 2, 3 ,4 ou 5\n");
      my_putstr("Faites votre choix: ");
      if (getchar() == 10)
	choix = getchar();
      my_putchar(10);
    }
  if (choix == '7')
    {
      my_putstr("\n\n\t\t\t\t\t      A bientôt !");
      return (0);
    }
  else
    menu_choix(choix);
  return (1);
}
