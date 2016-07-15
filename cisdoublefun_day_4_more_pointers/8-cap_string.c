/*makes first letter cpaital*/
char *cap_string(char *n)
{
  int i;

  i = 0;
  while (n[i] != '\0')
  {
    if(n[i] >= 'a' && n[i] <= 'z')
    {
    if((n[i-1] == ' ' && n[i] >= '\n') || n[i] == '\t')
    {
    n[i] = (n[i] -32);
      }
    }
    i++;
  }
  return(n);
}
