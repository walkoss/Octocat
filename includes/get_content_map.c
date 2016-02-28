#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "../octocat.h"

char	*get_content_map(char *map)
{
  char	*content;
  int	handle;

  if ((content = malloc(sizeof(char) * 1024)) == 0)
    return (0);
  handle = open(map, O_RDONLY);
  if (handle < 0)
    {
      my_putstr("\nProblème d'ouverture du fichier map\n");
      return (0);
    }
  if (read(handle, content, 1024) < 0)
    {
      my_putstr("\nProblème de lecture du fichier map\n");
      return (0);
    }
  close(handle);
  return (content);
}
