/*takes integer in paramer and prints it*/
#include "my_functions.h"
void print_number(int n)
{
int digits; int temp; int power; int singledigit; char chardigit; int digitscopy;
/* this takes care of 0 and negative numbers*/
if ( n == 0 ) {
	print_char('0');
	return; }
if ( n < 0 ) {
	print_char ('-');
	n = n * -1; }
/*figure out number of digits in the varaible*/
temp = n;
digits =0;
while (temp > 0) {
	temp = temp / 10;
	digits++; }
digitscopy = digits; /*store the value into copy*/
for (power = 1; digits > 1; digits--) {
	power = power * 10; }
/*start loop */
for (; digitscopy > 0; digitscopy--) {
	singledigit = n /power; /*divide n by power */
	chardigit = singledigit + '0'; /*print the digit */
	print_char(chardigit);
	n = n - (power * singledigit); /* subtract (power * digit) from n */
	power = power / 10; /*end loop*/
	}
}
