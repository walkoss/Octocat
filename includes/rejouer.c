#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../octocat.h"

void	rejouer()
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
    casu_jeu();
  else
    {
      empty_buffer();
      main();
    }
}

void	rejouer_hardcore()
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
    hardcore_jeu();
  else
    {
      empty_buffer();
      main();
    }
}

void  rejouer_mm()
{
  char  choix;

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
    multimap_mode();
  else
    {
      empty_buffer();
      main();
    }
}
