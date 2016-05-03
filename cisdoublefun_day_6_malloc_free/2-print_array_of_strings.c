#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int print_char(char c);
int element_length(char **a);

void print_array_of_strings(char **a)
{
  int i;
  int j;
  int elements = element_length(a);
  char *str;

  i = 0;
  j = 0;
  str = malloc (elements * sizeof(char));
  while (a[i] != '\0')
    {
      while (a[i][j] != '\0')
        {
          str[j] = a[i][j];
          print_char(str[j]);
          j++;
        }
      j = 0;
      print_char(' ');
      i++;
    }
  print_char('\n');
  free(str);
}

int print_char(char c)
{
      return (write(1, &c, 1));
}

int element_length(char **a)
{
  int i;
  int j;

  i = 0;
  j = 0;
  while (a[i] != '\0')
  {
    while (a[i][j] != '\0')
    {
      j++;
    }
    i++;
  }
  return j;
}
