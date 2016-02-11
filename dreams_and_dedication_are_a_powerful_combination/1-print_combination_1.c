/*
*this function prints nubmer 0 throgh 9
*with a comma and space to seperate
*/
#include "my_functions.h"
void print_combination_1(void)
/*selcts numbers 0 thorugh 9*/
{
int n;
for (n=0; n<=9; n++)
	{print_char(n+'0');
	if (n!=9)/*applies below loop to all numbers besides 9*/
		{
		print_char(',');
		print_char(' ');
		}
	}
}

