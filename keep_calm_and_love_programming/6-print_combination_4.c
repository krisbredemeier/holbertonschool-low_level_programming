/*this prints all possible combinations of two two differnt digits*/

#include "my_functions.h"
#include <stdio.h>
void print_combination_4(void)
{
int a;
int b;	
	for (a=0; a< 99; a++)
	{
		for (b= a+1; b<=99; b++)
		{		
		print_char ((a / 10) + '0');
		print_char ((a % 10) + '0');
		print_char (' ');
		print_char ((b / 10) + '0');
		print_char ((b % 10) + '0');

		if (a!=98)
					{
					print_char(',');
					print_char(' ');
					}
		}
	}
}
