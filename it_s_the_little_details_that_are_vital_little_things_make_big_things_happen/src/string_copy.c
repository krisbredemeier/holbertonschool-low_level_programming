/*copies string*/
char *string_copy(char *s1, const char *s2)
{
  char *s = s1;
  while ((*s++ = *s2++) !=0)
  ;
  return(s1);
}
