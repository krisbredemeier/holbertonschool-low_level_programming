/*converts lettes to lowecase*/
#include "my_functions.h"
char lowercase(char c)
{
if (c >= 65 && c < 91){
	c = c+32;
	}
	return(c);
}
