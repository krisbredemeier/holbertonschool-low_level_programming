/*concats strings*/
int string_length(char *str);

char *string_concat(char *dest, const char *src)
{
  int i;
  int j;

  i = string_length(dest);
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

int string_length(char *str)
{
  int x;

  x = 0;
  while(str[x] != '\0')
  {
    x++;
  }
  return (x);
}
