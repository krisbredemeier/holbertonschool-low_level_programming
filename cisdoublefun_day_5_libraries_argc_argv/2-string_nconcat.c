/*nconcat string*/

char *string_nconcat(char *dest, const char *src, int n)



{
  char *temp;
  int i;

  temp = dest;
  i = 0;
  while(*dest)
  {
    dest++;
  }
  dest--;
  if(*dest != '\n')
  {
    dest++;
  }
  while (i<n)
  {
    *dest=*src;
    dest++;
    src++;
    i++;
  }
  *dest='\0';
  return temp;
}
