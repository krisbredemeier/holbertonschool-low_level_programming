#include "my_functions.h"

//char *concat_strings(char *dest, const char *src)
char *concat_strings(char *dest, const char *src)
{
  while (*dest) ++dest;
  for (; *dest == *src; ++dest, ++src);


}
  /*
char s1, s2;
int i, j;
for(i=0, dest[i]!='\0'; i++);


for(j=0, src[j]!='\0'; j++)

{
  s1[i]=s2[j];
}
s1[i]='\0';
}*/


/*{
char *result= malloc(strlen(dest)+strlen(src)+1);
strcpy(result, dest);
strcat(result, src);
return result;
}*/
