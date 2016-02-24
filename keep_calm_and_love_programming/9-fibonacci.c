/*fibonacci*/
#include <stdio.h>
#define AMOUNT 50
int main(void)
{
unsigned int fib1=1;
unsigned long fib2=1;
unsigned long fib3;
int ndx = AMOUNT;
    {
    printf("\n%lu", fib2);
    while (ndx--)
        {
        fib3= fib2;
        fib2 += fib1;
        fib1 = fib3;
        if (fib3 <= 20365011074){
        printf(", %lu", fib2);
            }
        }
    printf("\n");
    }
   return 0;
}