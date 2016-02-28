#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../octocat.h"

int	left(int x, int y, char maze[11][21])
{
  if  (maze[x][y - 1] == '#')
    {
      my_putstr("\t\t\t\t\t  Vous avez perdu !");
      return (0);
    }
  else if (maze[x][y - 1] == 'S')
    {
      maze[x][y - 1] = '+';
      maze[x][y] = ' ';
      print_board(maze);
      my_putstr("\t\t\t\t\t  Vous avez gagne !");
      return (2);
    }
  else
    {
      maze[x][y - 1] = '+';
      maze[x][y] = ' ';
      return (1);
    }
}

int	up(int x, int y, char maze[11][21])
{
  if  (maze[x - 1][y] == '#')
    {
      my_putstr("\t\t\t\t\t  Vous avez perdu !");
      return (0);
    }
  else if (maze[x - 1][y] == 'S')
    {
      maze[x - 1][y] = '+';
      maze[x][y] = ' ';
      print_board(maze);
      my_putstr("\t\t\t\t\t  Vous avez gagne !");
      return (2);
    }
  else
    {
      maze[x - 1][y] = '+';
      maze[x][y] = ' ';
      return (1);
    }
}

int	right(int x, int y, char maze[11][21])
{
  if  (maze[x][y + 1] == '#')
    {
      my_putstr("\t\t\t\t\t  Vous avez perdu !");
      return (0);
    }
  else if (maze[x][y + 1] == 'S')
    {
      maze[x][y + 1] = '+';
      maze[x][y] = ' ';
      print_board(maze);
      my_putstr("\t\t\t\t\t  Vous avez gagne !");
      return (2);
    }
  else
    {
      maze[x][y + 1] = '+';
      maze[x][y] = ' ';
      return (1);
    }
}

int	down(int x, int y, char maze[11][21])
{
  if  (maze[x + 1][y] == '#')
    {
      my_putstr("\t\t\t\t\t  Vous avez perdu !");
      return (0);
    }
  else if (maze[x + 1][y] == 'S')
    {
      maze[x + 1][y] = '+';
      maze[x][y] = ' ';
      print_board(maze);
      my_putstr("\t\t\t\t\t  Vous avez gagne !");
      return (2);
    }
  else
    {
      maze[x + 1][y] = '+';
      maze[x][y] = ' ';
      return (1);
    }
}
