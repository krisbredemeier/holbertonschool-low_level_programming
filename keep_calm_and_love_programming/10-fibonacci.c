/*sum of 4million*/
#include <stdio.h>
int main() {
    unsigned int total = 0;
    unsigned int n0 = 0;
    unsigned int n1 = 1;
    unsigned int n2;
    while ( total < 4000000 ) {
        n2 = n1;
        n1 = n0 + n1;
        n0 = n2;
        if ( n1 % 2 == 0 ) {
            total = total + n1;
        }
    }
    printf( "Total: %u\n", total );
    return 0;
}
