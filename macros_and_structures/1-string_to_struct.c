/*function that stores a string and its length in a newly allocated structure, and return the address of this structure*/
#include <stdlib.h>
#include "str_struct.h"

int str_len(char *str);
char *string_dup(char *str);


struct String *string_to_struct(char *sss)
{
  struct String *s;
  s = malloc(sizeof(struct String));
  if (s == NULL)
  {
    return (NULL);
  }
    s->str = string_dup(sss);
    s->length = str_len(sss);
      return (s);
  }

int str_len(char *str)
{
int count;
count = 0;
	while (str[count] != '\0'){
		count++;
    }
    return (count);
}

char *string_dup(char *str)
{
  char *s2;
  int i = 0;
  s2 = malloc(sizeof(char)*str_len(str)+1);
  if(s2 == NULL)
    {
      return NULL;
    }
    while(*(str+i) != '\0'){
      s2[i] = *(str+i);
      i+=1;
    }
  s2[i] = '\0';
  return s2;
}
