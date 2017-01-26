#include <stdio.h>
/*
 *print all numbers from 0 to 99 in order followed by , using only p...
 */

/**
 *main - entry point
 *spits out 0, 1, ..., 99 using only p... 5 times
 *Return: 0
 */
int main(void)
{
	int d = 48;
	int i;

	while (d < 58)
	{
		i = 48;
		while (i < 58)
		{
			putchar(d);
			putchar(i);
			if (!(d == 57 && i == 57))
			{
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		d++;
	}
	putchar('\n');

	return (0);
}
