#include <stdio.h>

int main()
{
	int i;
	for (i = 1; i < 101; i++)
	{
		printf("%d ", i);
		if (i % 15 == 0){
			printf("fizz-buzz ");
		} 
		else if (i % 5 == 0) {
			printf("buzz ");
		}
		else if (i % 3 == 0) {
			printf("fizz ");
		}
	}
}









