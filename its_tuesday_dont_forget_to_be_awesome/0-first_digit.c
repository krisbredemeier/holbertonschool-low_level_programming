/*prints the first digit of a number*/
#include "my_functions.h"
int first_digit(int n)
{
int length;
int number=n;
	if(n>0) {
	number=number*-1;
	n=n*-1;
	}
	for(length=0; number<-9; length++) {
		number=number/10;
	}
	return(-number);
}
