//finds factorial of number passsed in
#include "my_functions.h"
int factorial(int n)
{
    if(n==1)
        return 1;
    if (n<=0)
        return -1;
    if ((n * factorial(n-1)) > 2147483647)
      return -1;
      return (n * factorial(n-1));
}
