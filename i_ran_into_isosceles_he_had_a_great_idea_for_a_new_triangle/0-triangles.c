#include <stdio.h>
#include "my_functions.h"
void triangles_in_the_term(int h, int n)
{
	 //h=rows
	int i;//current row
	int s; //spaces
	int c; //counter (for *s)
	int ncopy=n;//makes a copy of n
	//n=nuber of times tree repeats

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

