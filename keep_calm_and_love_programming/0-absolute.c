#include <stdio.h>
int absolute(int v)
{
	return v * ( (v<0) * (-1) + (v>0));
}
