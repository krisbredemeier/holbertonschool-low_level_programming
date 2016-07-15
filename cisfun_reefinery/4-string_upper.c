/*checks to see if stirng has only uppercase letters*/
int str_len(char *str);

int string_upper(char *s)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    i++;
  }
  if (i < str_len(count))
  {
    i++;
  }
  if (s[i] > 'A' && s[i] < 'Z')
  {
    return 0;
  }
  return 1;
}

int str_len(char *str)
{
  int count;
  while (*str != '\0')
  {
    count++;
    str++;
  }
  return count;
}
