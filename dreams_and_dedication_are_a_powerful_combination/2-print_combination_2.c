/*Prints two digit number combinations with no repeats*/

#include "my_functions.h"

void print_combination_2(void)

{
int n;
int x;

for (n=0; n<=9; n++)
for (x=1; x<=9; x++)
if (x>n)
	{
	print_char(n+'0');
	print_char(x+'0');
if (n!=9)
		{	
		print_char(',');
		print_char(' ');
		}
	}

}

