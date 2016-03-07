/*function that prints a string*/
#include "my_functions.h"
void print_string(char *str)

{
int count = 0;
	while(*(str + count) != '\0'){
		print_char(*(str + count) );
		count +=1;
    }
}
