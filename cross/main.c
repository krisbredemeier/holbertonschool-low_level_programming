/* program to print an 'x' using arguments entered by user */
#include <unistd.h>

int print_char(char);
int string_to_int(char *str);
int string_to_int_n(char *str, int n);

int main(int argc,char **argv)
{
  int rows;
  int cols;
  int n;
  int x;
  int middle;

  rows = 0;
  cols = 0;

  /* check to make sure the user enters a number */
  if (argc < 2) {
    return (1);
  }

  n = string_to_int(argv[1]);
  if (n%2 == 1) {x = 1;}
  else {x = 0;}
  middle = (n + 1)/2;
  for (rows=1; rows <= n; rows++)
  {
    for(cols = 0; cols <=n; cols++)
    {
      if (rows == 1 && rows == cols && cols == middle)
      {
        print_char('X');
      } else if (cols == rows) {
        print_char('\\');
      } else if (cols == n-rows) {
        print_char('/');
      } else {
        print_char(' ');
      }
    }
    print_char('\n');
  }
return 0;
}

/*
  takes a pointer and argument,
  changes string to int, decphers if
  number is positive or negative
*/
int string_to_int_n(char *str, int n)
{
  int sign = 1;
  int place = 1;
  int ret = 0;
  int i = n -1;
  for (; i >=0; i--, place *=10)
  {
    int c = str[i];
    switch (c)
    {
      case '-':
        if (i == 0) sign = -1;
        else return -1;
        break;
      default:
        if (c >= '0' && c <= '9') ret +=(c - '0') * place;
        else return -1;
    }
  }
  return sign * ret;
}

/* takes a pointer to transform a stirng to int */
int string_to_int(char *str)
{
  char *temp = str;
  int n;

  n = 0;
  while (*temp != '\0')
  {
    n++;
    temp++;
  }
  return string_to_int_n(str, n);
}

/* prints a single character */
int print_char(char c)
    {
          return (write(1, &c, 1));
    }
