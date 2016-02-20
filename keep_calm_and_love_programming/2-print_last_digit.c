/*this prints the last digit*/

#include <unistd.h>
#include "my_functions.h"
void print_last_digit(int n)
{
int length;
int power=1;
int number=n;
	if (n<0) {
	number = number*-1;
	n= n*-1;
		}
	for(length=0; number > 0; length++) {
	number=number/10;
		}
	while(length>1) {
	power=power*10;
	length--;
	}
	n=n%power;
	print_char(n+'0');
}
