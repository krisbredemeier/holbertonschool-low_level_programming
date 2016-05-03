/*function taht retruns length of a sring*/

int str_len(char *str)
{
int count = 0;
	while(*str != '\0'){
		count++;
		str++;
    }
    return (count);
}
