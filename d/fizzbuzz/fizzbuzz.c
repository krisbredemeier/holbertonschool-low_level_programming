#include <stdio.h>

int main()
{
	int i;
	for (i = 1; i < 101; i++)
	{
		if (i % 15 == 0){
			printf("%d fizz-buzz ", i);
		} 
		else if (i % 5 == 0) {
			printf("%d buzz ", i);
		}
		else if (i % 3 == 0) {
			printf("%d fizz ", i);
		}
	}
}









