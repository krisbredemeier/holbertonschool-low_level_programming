#include <stdio.h>
#define AMOUNT 50
int main(void)
{
unsigned int fib1=1;
unsigned int fib2=1;
unsigned int fib3;
int ndx = AMOUNT;
    {
    printf("\n%d", fib2);
    while (ndx--)
        {
        fib3= fib2;
        fib2 += fib1;
        fib1 = fib3;
        printf(", %d", fib2);
        }
    printf("\n");
    }
   return 0;
}
