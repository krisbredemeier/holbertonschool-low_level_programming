/*checks to see if string has only upper char*/
int string_upper(char *s)
{
  int i;

  i = 0;
  while (s[i] >= 'A' && s[i] <= 'Z')
  {
    return 1;
    i++;
  }
  if (s[i] < 1)
  {
    return 1;
  }
  return 0;
}
