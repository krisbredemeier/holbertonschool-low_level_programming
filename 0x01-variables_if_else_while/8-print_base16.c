#include <stdio.h>
/*
 *print all single digits in base 16 in order using only putchar
 */

/**
 *main - entry point
 *spits out numbers 0 to f using only putchar 3 times
 *Return: 0
 */
int main(void)
{
	int d = 48;

	while (d < 58)
	{
		putchar(d);
		d++;
	}
	d = 'a';
	while (d <= 'f')
	{
		putchar(d);
		d++;
	}
	putchar('\n');

	return (0);
}
