#include <stdlib.h>
int str_len(char *str);
char *string_dup(char *str)
{
  char *s2;
  int i = 0;
  s2 = malloc(sizeof(char)*str_len(str));
  if(s2 == NULL)
    {
      return NULL;
    }
    while(*(str+i) != '\0'){
      s2[i] = *(str+i);
      i+=1;
    }
  return s2;
}



/*function that retruns length of a sring*/
int str_len(char *str)
{
int count = 0;
	while(*str != '\0'){
		count++;
		str++;
    }
    return (count);
}
