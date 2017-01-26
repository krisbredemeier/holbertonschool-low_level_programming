#include <stdio.h>
/*
 *print all single digits in order followed by , using only p...
 */

/**
 *main - entry point
 *spits out 0, 1, ..., 9 using only p... 4 times
 *Return: 0
 */
int main(void)
{
	int d = 48;

	while (d < 58)
	{
		putchar(d);
		if (d != 57)
		{
			putchar(',');
			putchar(' ');
		}
		d++;
	}
	putchar('\n');

	return (0);
}
