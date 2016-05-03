#include <unistd.h>
/*prints a number*/
int print_char(char c);

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
