#include <limits.h>
int factorial(int n)
{
  int c;
  int fact;

  c = 1;
  fact = 1;

  if (n<0)
  {
    return -1;
  }
  if (n == 0)
  {
    return 1;
  }
  if (n > INT_MAX)
  {
    return -1;
  }
  for(;c <= n; c++)
    fact = fact * c;
    return fact;
}
