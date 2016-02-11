#include "my_functions.h"
/*
*this file writes a function that
*takes an integer in parameter and prints it
*/
void print_number(int n)
/*this is a list of decalred variables*/
{
int digits;
int temp;
int power;
int singledigit;
char chardigit;
int digitscopy;
/*
*the loop will not work if the nubmer is 0,
*so there must be a seperate if statment for this case
*/
if ( n == 0 )
	{
	print_char('0');
	return;
	}
/*
*if the number is less then 0, you need to make it a positive
*to to run the loop
*then add back in the minus symbol
*/
if ( n < 0 )
	{
	print_char ('-');
	n = n * -1;
	}
/*figure out number of digits in the varaible*/
temp = n;
digits =0;
while (temp > 0)
	{
	temp = temp / 10;
	digits++;
	}
/* 10 ** power */
digitscopy = digits; /*store the value into copy*/
for (power = 1; digits > 1; digits--)
	{
	power = power * 10; 
	}
/*start loop */
for (; digitscopy > 0; digitscopy--)
	{
	/*divide n by power */
	singledigit = n /power;
	/*print the digit */
	chardigit = singledigit + '0';
	print_char(chardigit);
	/* subtract (power * digit) from n */
	n = n - (power * singledigit);
	/*end loop*/
	power = power / 10;
	}
}
