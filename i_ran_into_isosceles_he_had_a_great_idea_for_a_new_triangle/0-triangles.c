/*prints triangle*/
#include <stdio.h>
#include "my_functions.h"
void triangles_in_the_term(int h, int n)
{

	int i;
	int s;
	int c;
	int ncopy=n;

		for(ncopy=0; ncopy<n; ++ncopy)
			for(i=1;i<=h;i++)
		{
				for(s=0;s<h-i ;s++)
					printf(" ");
				for(c=0;c<(2*i-1) ;c++)
					printf("*");
				printf("\n");
		}
}
