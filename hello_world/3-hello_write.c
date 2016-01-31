#include<stdio.h>
#include<unistd.h>

int main (void)
{
        write(1, "Hello, C", 8);
	write(1, "\n", 2);
        return  0;
}

