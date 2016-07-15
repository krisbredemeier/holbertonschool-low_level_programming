/*checks to see if a stirng has only alpha characters*/
int string_alpha(char *s)
{
  int i;

  i = 0;
  while (( s[i] >='A' && s[i] <= 'Z') || (s[i] >='a' && s[i] <= 'z'))
  {
    return 1;
    i++;
  }
  return 0;
}
