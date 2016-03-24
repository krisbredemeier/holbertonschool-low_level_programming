#include "my_functions.h"
int factorial(int n)
{
    if(n==1)
        return 1;
    else if (n<=0)
        return -1;
    else
        return n * factorial(n-1);
}
