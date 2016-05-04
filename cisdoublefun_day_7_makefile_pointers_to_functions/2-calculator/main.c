/*calculator*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int print_char(char c);
void print_number(int n);
int(*op_function)(int, int);
int(*get_op_func(char c))(int, int);

int main(int argc, char *argv[])
{
  int i;

  if (argc != 4)
  {
    return 1;
  }
  op_function = get_op_func(*argv[2]);

  if (op_function == 0)
  {
    return 1;
  }
  i = op_function(atoi(argv[1]), atoi(argv[4]));
  print_number(i);
  print_char('\n');
  return 0;
}

void print_number(int n)
{
  int i;
  int temp;
  int x;

  i = 1;
  x = 1;

  if (n < 0)
  {
    print_char('-');
    x = -1;
  }
  for (temp = n; temp > 9 || temp < -9;temp = temp / 10)
  {
    i++;
  }
  while (i)
  {
    int i2;
    i2 = i--;
    temp = n;
    while (i2-- > 1)
    {
      temp /= 10;
    }
    print_char(((temp % 10) * x + '0'));
  }
}



int print_char(char c)
{
      return (write(1, &c, 1));
}
