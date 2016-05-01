/*changes everything to lowercase*/
char *lowercase_string(char *n)
{
  int i;

  i = 0;
  while(n[i] != '\0')
  {
    if (n[i] >= 'A' && n[i] <= 'Z')
    n[i] = n[i] +32;
    i++;
  }
  return (n);
}
