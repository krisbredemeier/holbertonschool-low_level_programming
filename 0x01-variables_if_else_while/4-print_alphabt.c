#include <stdio.h>
/*
 *print the alphabet except 2 letters using only putchar
 */

/**
 *main - entry point
 *spits out the lower case alphabet, except q and e use putchar no more
 *than twice
 *Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (!(c == 'e' || c == 'q'))
			putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
