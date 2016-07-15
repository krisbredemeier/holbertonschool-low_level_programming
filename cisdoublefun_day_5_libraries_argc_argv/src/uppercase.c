/*converts lettes to uppercase*/
#include "holbertonschool.h"
char uppercase(char c)
{
if (c > 90 && c <= 122){
	c = c-32;
	}
	return(c);
}
