/*checks to see if a stirng has only digits*/
int string_digit(char *s)
{
  int i;

  i = 0;
  while (s[i] >= '0' && s[i] <= '9')
  {
    return 1;
    i++;
  }
  if (s[i] < 1)
  {
    return 0;
  }
  return 0;
}
