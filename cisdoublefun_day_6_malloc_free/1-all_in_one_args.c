#include <stdlib.h>
#include <unistd.h>
int str_len(char *str);
int print_char(char c);
char *string_concat(char *dest, const char *src);
int areguments_length(int ac, char **av);

char *all_in_one_args(int ac, char **av)
{
  int i;
  int length;
  char *str;
  char line[] = {'\n', '\0'};

  length = areguments_length(ac, av);
  i = 0;
  str = malloc(length * sizeof(char));
  if(str == NULL)
  {
    return NULL;
  }
  while (i < ac)
  {
    string_concat(str, av[i]);
    string_concat(str, line);
    i++;
  }
  return str;
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

int print_char(char c)
{
  return (write(1, &c, 1));
}

char *string_concat(char *dest, const char *src)
{
  int i;
  int j;

  i = str_len(dest);
  j = 0;

  while (src[j] != '\0')
    {
      dest[i] = src[j];
      i++;
      j++;
    }
  dest[i] = '\0';
  return dest;
}
 int areguments_length(int ac, char **av)
 {
   int i;
   int length;

   i = 0;
   length = 0;
   while (i < ac)
   {
     length += str_len(av[i] +1);
     i++;
   }
   return length;
 }
