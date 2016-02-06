#include "my_functions.h"
void print_base16(void)
{
	char x;
	char y;
	for (x='0' ; x<='9' ; x++)
	{
	print_char(x);
	}
	for(y='A' ; y<='F' ; y++)
	{
	print_char(y);
	}
}
