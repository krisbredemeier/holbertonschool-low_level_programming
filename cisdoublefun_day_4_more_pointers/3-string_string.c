/*compares two strings to see if there is a needle in the haystack*/
#include <stdio.h>
int string_lenght(const char *s);

char string_string(const char *haystack, const char *needle)
{
  int hay;
  int need;
  int s;
  int i;
  int j;

  j = 0;
  i = 0;
  hay= string_length(haystack);
  need = string_length(needle);
  while (i < hay)
  {
    if (haystack[i] == needle[0])
    {
      s = i;
      while (haystack[i] == needle[j] && i < hay)
      {
        if (j == need)
        {
          return subb(s, haystack);
        }
        i++;
        j++;
      }
      i = s;
      j = 0;
    }
    i++;
  }
  return 0;
}

char *subb(int s, const char *src)
{
  char *sub;
  int i;
  int j;

  i = s;
  j = 0;
  while (src[i] != '\0')
  {
    sub[j] = src[i];
    i++;
    j++;
  }
  sub[j] ='\0';
  return sub;
}

int string_lenght(const char *s)
{
  int i;

  i = 0;
  while(s[i] != '\0')
  {
    i++;
  }
  return i;
}
