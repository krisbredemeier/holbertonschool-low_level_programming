char *cap_string(char *n)
{
  int i;

  i= 0;
  while(n[i] != '\0')
  {
    if((n[0] >= 'a' && n[0] <= 'z') || (n[i-1] == ' ' && n[i] >= 'a' && n[i] <= 'z'))
    n[i] = (n[i] -32);
    i++;
  }
  return(n);
}
