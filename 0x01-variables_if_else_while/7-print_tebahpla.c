#include <stdio.h>
/*
 *print the alphabet in reverse order using only putchar
 */

/**
 *main - entry point
 *spits out the lower case alphabet in reverse order, use putchar no more
 *than twice
 *Return: 0
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');

	return (0);
}
