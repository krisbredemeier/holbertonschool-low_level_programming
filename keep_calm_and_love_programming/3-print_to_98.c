/*takes an integra as an argument and prints it on one line*/
#include <stdio.h>
void print_to_98(int n)
{
	while (n<98)
	{ printf("%d, ",n);
	n++;
	}
	while (n>98)
	{ printf("%d, ",n);
	n--;
	}
	printf("98\n");
}
