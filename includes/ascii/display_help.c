#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../../octocat.h"

void	retour_menu()
{
  char	choix;

  empty_buffer();
  my_putstr("\n\n\t\t\t\t        -> Allez au menu ? (o/n) : ");
  choix = getchar();
  while (choix != 110 && choix != 111)
    {
      my_putstr("\n\n\t\t\t\t        Choix incorrect: 'o' ou 'n'\n");
      my_putstr("\t\t\t\t            -> Votre choix ? : ");
      empty_buffer();
      choix = getchar();
      my_putchar(10);
    }
  my_putchar(10);
  if (choix == 'o')
  {
    empty_buffer();
    main();
  }
  else
    my_putstr("\n\t\t\t\t\t\tA bientot");
}

void	display_help()
{
  my_putstr("\t\t\t\t\t\t-------------\n");
  my_putstr("\t\t\t\t\t\tModes de jeu\n");
  my_putstr("\t\t\t\t\t\t-------------\n\n");
  my_putstr("\t\t\t\t\tOctocat et ses modes de jeu.\n\n");
  my_putstr("\t\t\t\t\t\t> Mode Casu:\n\n");
  my_putstr("> - Le mode Casu consiste à faire déplacer l'octocat où le joueur effectue un déplacement par tour.\n");
  my_putstr("> - A  chaque tour, le joueur entre un déplacement (a, s, d ou w) ce qui permet de faire déplacer l'octocat **case par case** jusqu'à la sortie du labyrinthe.\n\n");
  my_putstr("\t\t\t\t\t\t> Mode Hardcore:\n\n");
  my_putstr("> - Le mode Hardcore consiste à faire déplacer l'octocat où le joueur effectue tout le trajet **en une seule fois**.\n");
  my_putstr("> - Ce mode inclut l'affichage du parcours realisé pour rendre le mode dynamique\n\n");
  my_putstr("\t\t\t\t\t\t> Mode Blind:\n\n");
  my_putstr("> - Le mode Blind consiste à faire déplacer l'octocat où le joueur effectue le trajet mais **il ne voit pas la carte**. Il recommence donc autant de fois jusqu'à qu'il arrive à sortir du labyrinthe.\n\n");
  my_putstr("\t\t\t\t\t\t> Mode Octoview:\n\n");
  my_putstr("> - Le mode Octoview est semblable au mode Blind sauf que le joueur **ne voit que les 8 cases** autours de lui.\n\n");
  my_putstr("\t\t\t\t\t\t> Mode Multimap:\n\n");
  my_putstr("> - Le mode Multimap est un mode où l'on **peut jouer sur plusieurs cartes** combiné avec le mode **Casu**.\n");
  retour_menu();
}
