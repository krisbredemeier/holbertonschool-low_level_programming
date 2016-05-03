/*this function returns a pointer to a newly allocated space in memory*/
#include <stdlib.h>
int str_len(char *str);

char *string_dup(char *str)
{
  char *str2;
  int i;

  i = 0;
  str2 = malloc(sizeof(char*)*str_len(str));
  if (str2 == NULL)
  {
    return (NULL);
  }
  while (str[i] + 1 != '\0')
  {
    str2[i] = str[i];
    i+=1;
  }
  return str2;
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
