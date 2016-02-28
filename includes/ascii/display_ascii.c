#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../../octocat.h"

void	logo(char str)
{
  if (str == '1')
    my_putstr("\033[1;1H\033[2J");
  my_putstr("\t\t\t\t   ____       _                  _   \n");
  my_putstr("\t\t\t\t  / __ \\     | |                | |  \n");
  my_putstr("\t\t\t\t | |  | | ___| |_ ___   ___ __ _| |_ \n");
  my_putstr("\t\t\t\t | |  | |/ __| __/ _ \\ / __/ _` | __|\n");
  my_putstr("\t\t\t\t | |__| | (__| || (_) | (_| (_| | |_ \n");
  my_putstr("\t\t\t\t  \\____/ \\___|\\__\\___/ \\___\\__,_|\\__|\n\n");
  my_putstr("\t\t\t\t ____________________________________\n");
  my_putstr("\t\t\t\t                 Walkoss             \n");
  my_putstr("\t\t\t\t ____________________________________\n\n\n");
}

void	display_octocat()
{
  my_putstr("\t\t\t\t          MMM.           .MMM\n");
  my_putstr("\t\t\t\t          MMMMMMMMMMMMMMMMMMM\n");
  my_putstr("\t\t\t\t          MMMMMMMMMMMMMMMMMMM\n");
  my_putstr("\t\t\t\t         MMMMMMMMMMMMMMMMMMMMM\n");
  my_putstr("\t\t\t\t        MMMMMMMMMMMMMMMMMMMMMMM\n");
  my_putstr("\t\t\t\t       MMMMMMMMMMMMMMMMMMMMMMMM\n");
  my_putstr("\t\t\t\t       MMMM::- -:::::::- -::MMMM\n");
  my_putstr("\t\t\t\t        MM~:~   ~:::::~   ~:~MM\n");
  my_putstr("\t\t\t\t   .. MMMMM::. .:::+:::. .::MMMMM ..\n");
  my_putstr("\t\t\t\t         .MM::::: ._. :::::MM.\n");
  my_putstr("\t\t\t\t            MMMM;:::::;MMMM\n");
  my_putstr("\t\t\t\t     -MM        MMMMMMM\n");
  my_putstr("\t\t\t\t     ^  M+     MMMMMMMMM\n");
  my_putstr("\t\t\t\t         MMMMMMM MM MM MM\n");
  my_putstr("\t\t\t\t              MM MM MM MM\n");
  my_putstr("\t\t\t\t              MM MM MM MM\n");
  my_putstr("\t\t\t\t           .~~MM~MM~MM~MM~~.\n");
  my_putstr("\t\t\t\t        ~~~~MM:~MM~~~MM~:MM~~~~\n");
  my_putstr("\t\t\t\t       ~~~~~~==~==~~~==~==~~~~~~\n");
  my_putstr("\t\t\t\t        ~~~~~~==~==~==~==~~~~~~\n");
  my_putstr("\t\t\t\t            :~==~==~==~==~~\n\n\n");
}

void	display_menu()
{
  my_putstr("\033[1;1H\033[2J");
  logo('0');
  display_octocat();
  my_putstr("\t\t\t    -----------------------------------------------\n");
  my_putstr("\t\t\t    |                   [MENU]                    |\n");
  my_putstr("\t\t\t    |---------------------------------------------|\n");
  my_putstr("\t\t\t    |                                             |\n");
  my_putstr("\t\t\t    |               [1] - Casu                    |\n");
  my_putstr("\t\t\t    |               [2] - Hardcore                |\n");
  my_putstr("\t\t\t    |               [3] - Blind Mode              |\n");
  my_putstr("\t\t\t    |               [4] - Octoview Mode           |\n");
  my_putstr("\t\t\t    |               [5] - Multimap                |\n");
  my_putstr("\t\t\t    |               [6] - Help                    |\n");
  my_putstr("\t\t\t    |               [7] - Quitter                 |\n");
  my_putstr("\t\t\t    |                                             |\n");
  my_putstr("\t\t\t    |---------------------------------------------|\n");
  my_putstr("\n\n\t\t\t\t       -> Faites votre choix: ");
}
