/*function taht retruns length of a sring*/
int str_len(char *str)
{
int count = 1;
	while(*str != '\0'){
		count++;
		str++;
    }
    return (count);
}
