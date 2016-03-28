/*writes a function that reverses a string*/
void reverse_string(char *s)
{
	int i = 0;
	int x, y;
	while (*(s + i) != '\0'){
		i+=1;
	}
	char val [i-1];
	for (y=0; y < i; y++) {
		val[y]= *(s+y);
	}
	for (x=0; x < i; x++) {
		*(s+x) = val[i-1-x];
	}
}
