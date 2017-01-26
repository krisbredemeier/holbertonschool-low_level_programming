#include <stdio.h>
/*
 *print the alphabet using only putchar
 */

/**
 *main - entry point
 *spits out the lower case than upper case alphabet, use putchar no more
 *than 3 times
 *Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
