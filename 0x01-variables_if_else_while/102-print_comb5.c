 #include <stdio.h>
/*
 * Prints all combinations of different two two-digits numbers
 */

/**
 * main - entry point
 * prints all combinations of 2 two-digits numbers using only 8 times
 * p....
 * Return: int 0
 */
int main(void)
{
	int a, b, c, d;

	a = 48;
	while (a < 58)
	{
		b = 48;
		while (b < 58)
		{
			c = a;
			while (c < 58)
			{
				if (c == a)
					d = b + 1;
				else
					d = 48;
				while (d < 58)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (!(a == 57 && b == 56 && c == 57 &&
					    d == 57))
					{
						putchar(',');
						putchar(' ');
					}
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
