#include <stdio.h>
#define NUMBER 1024
int main(void)
{
int i = NUMBER;
int total = 0;
	while (i--) {
		if (i%3==0 || i%5==0) {
		total += i;
		}
	}
	printf("%d\n", total);
	return 0;	
}
