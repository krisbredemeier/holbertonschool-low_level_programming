#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * grab the last digit of a random number and print
 *answer as per requisited
 */

/**
 *main - entry point
 *gets las digit of random number, compare it to other given values
 *Return: 0
*/
int main(void)
{
	int n;
	int j;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	j = n % 10;
	printf("Last digit of %d is %d and ", n, j);

	if (j > 5)
		printf("is greater than 5\n");
	else if (j == 0)
		printf("is 0\n");
	else
		printf("is less than 6 and not 0\n");

	return (0);
}
