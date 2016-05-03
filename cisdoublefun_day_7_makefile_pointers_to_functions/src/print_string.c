#include <unistd.h>

int print_char(char c);

/* prints a string */
void print_string(char *str)
{
  int i;

  i = 0;

  while (str[i] != '\0')
    {
      print_char(str[i]);
      i++;
    }
}

int print_char(char c)
{
      return (write(1, &c, 1));
}
