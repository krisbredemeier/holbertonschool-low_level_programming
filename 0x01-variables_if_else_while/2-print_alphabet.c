#include <stdio.h>
/*
 * print the alphabet using only
 */

/**
 * main - entry point
 * spits out the lower case alphabet,  no more
 * than twice
 * Return: 0
 */
int main(void)
{
	int c;

	c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
