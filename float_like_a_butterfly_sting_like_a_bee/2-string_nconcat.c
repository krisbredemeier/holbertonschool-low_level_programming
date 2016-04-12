#include <stdlib.h>
int str_len(char *str);

char *string_nconcat(char *s1, char *s2, int n)
{
  int size = str_len(s1)+(n+1);
  char *str_this;
  int x=0;
  int y=0;
  str_this = malloc(sizeof(char)*size);
  if(str_this == NULL)
    {
      return NULL;
    }
    while (*(s1+x) != '\0') {
          str_this[x] = *(s1 + x);
          x += 1;
    }
    while (*(s2+y) != '\0') {
          str_this[x+y] = *(s2 + y);
          y += 1;
    }
    str_this[x + n] = '\0';
    return str_this;
}


int str_len(char *str)
{
int count = 0;
	while(*str != '\0'){
		count++;
		str++;
    }
    return (count);
}
