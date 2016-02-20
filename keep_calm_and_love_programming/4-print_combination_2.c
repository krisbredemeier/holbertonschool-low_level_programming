/*this prints all possible combinations of two differnt digits*/
#include <stdio.h>
#include "my_functions.h"
void print_combination_2(void)
{
int x;
int y;
	for (x=0; x<= 9; x++)
	{
	for (y=0; y<= 9; y++)
	{
		if (x!=y && x<y)
			{
			print_char(x+'0');
			print_char(y+'0');
		if (x<8 && y<=9)
			{
			print_char(',');
			print_char(' ');
			}
		}
	}
}
}
