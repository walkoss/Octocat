#include <unistd.h>
#include <stdlib.h>

char	*readLine()
{
  ssize_t	ret;
  char	*buff;

  if ((buff = malloc(sizeof(*buff) * (1024 + 1))) == NULL)
    return (NULL);
  if ((ret = read(0, buff, 1024)) > 1)
    {
      buff[ret - 1] = '\0';
      return (buff);
    }
  buff[0] = '\0';
  return (buff);
}
