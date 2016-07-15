#include <stdio.h>
char *lowercase_string(char *n);

int main(void)
{
   char s[] = "Holberton School!\n";
   char *p;

   p = lowercase_string(s);
   printf("%s", p);
   printf("%s", s);
   return (0);
}
