/*checks to see if string has only lowercase*/
int string_lower(char *s)
{
  int i;

  i = 0;
  while (s[i] != '\0')
  {
    if (s[i] >= 'a' && s[i] <= 'z')
  {
    return 1;
    i++;
  }
  if (s[i] < 1)
  {
    return 0;
  }
}
  return 0;
}
