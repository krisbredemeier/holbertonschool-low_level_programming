/*Prints three digit number combinations with no repeats*/
#include "my_functions.h"
void print_combination_3(void)
{
int n;
int x;
int y;
for (n=0; n<=9; n++)
for (x=0; x<=9; x++)
for (y=0; y<=9; y++)
if ((y>x) && (x>n))
	{
	print_char(n+'0');
	print_char(x+'0');
	print_char(y+'0');
if ((n==7) && (x==8) && (y==9))
{
}
	else	{	
		print_char(',');
		print_char(' ');
		}
	}
} 
