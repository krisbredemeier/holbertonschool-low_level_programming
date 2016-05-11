/*program that reproduces the behaviour of the cat command*/
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>

int main (int ac, char **argv)
{
  int fd;
  char buf[BUFSIZ];

  if (ac == 1)
  {
    while (read(0, &buf, 1))
    {
      write(1, &buf, 1);
    }
    return 0;
  }

  if (ac == 2)
  {
    fd = open(argv[1], O_RDONLY);
    while (read(fd, &buf, 1))
    {
      write(1, &buf, 1);
    }
    if (close(fd))
    {
      return 1;
    }
    return 0;
  }
  return 1;
}
