#include <unistd.h>

int print_char(char c);
void print_string(char *str);

int main (int argc, char **argv)
{
  int i;

  i= argc -1;
  while (i >= 0)
  {
    print_string(argv[i]);
    i--;
  }
}

void print_string(char *str)
{
  int i;

  i  = 0;
  while(str[i] != '\0')
  {
    print_char(str[i]);
    i++;
  }
  print_char('\n');
}


int print_char(char c)
{
  return (write(1, &c, 1));
}
