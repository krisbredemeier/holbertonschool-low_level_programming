/*works like strcmp*/
int strings_compare(char *s1, const char *s2)
{
  while (*s1 || *s2)
  {
    if (*s1 != *s2)
    {
      return *s1 - *s2;
    }
    s1++;
    s2++;
  }
  return 0;
}
