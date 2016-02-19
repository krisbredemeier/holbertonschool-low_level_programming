/*this prints all possible combinations of two two differnt digits*/
#include "my_functions.h"
void print_combination_2(void)

{
int w;
int x;
int y;
int z;
int A;
int B;
	for (w=0; w<= 9; w++)
	{
	for (x=0; x<= 9; x++)
	{
	for (y=0; y<=9; y++)
	{
	for (z=1; z<=9; z++)

		A= w*10+x;
		B= y*10+z;
		if(A<B)
			{
			print_char(w+'0');
			print_char(x+'0');
			print_char(' ');
			print_char(y+'0');
			print_char(z+'0');
		if (A!=98)
			{
			print_char(',');
			print_char(' ');
			}
		}
	}
}
}
}
