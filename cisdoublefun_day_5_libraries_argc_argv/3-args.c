#include <stdio.h>
#include <unistd.h>

int print_char(char c);

int main (int argc, char **argv)
{
  int i;
  int j;

  i=0;
  j=0;

    while (i < argc)
    {
      j = 0;
      while (argv[i][j] != '\0')
      {
        print_char(argv[i][j]);
        j++;
      }
      print_char('\n');
      i++;
    }
}

int print_char(char c)
{
  return (write(1, &c, 1));
}
