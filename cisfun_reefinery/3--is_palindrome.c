int is_palindrome(char *s)
{
  int i;
  int j;
  char *s2;

  i = 0;
  j = 0;
  s2 = 0;
  while (s[i] != '\0')
  {
    while (s2[j] != '\0')
    {
      if (s[i] == s2[j])
      j--;
    }
    return 1;
    i++;
  }
return 0;
}

int str_len (char *str)
{
  while (*str != '\0')
  {
    str++;
  }
  return str;
}
