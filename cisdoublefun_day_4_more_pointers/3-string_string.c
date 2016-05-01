int str_len(char *s);
char *string_copy(char *dest, const char *src);

string_string(const char *haystack, const char *needle)
{
  char c;
  size_t len;

  c = *needle++;
  if(!c)
    return (char *) haystack;

    len = str_len(needle);
    do {
      char sc;
        do {
          sc = *haystack++;
          if(!sc)
            return (char *) 0;
        }
        while (sc != c);
    }
    while string_copy(haystack, needle, len) != 0;
    return (char *)(haystack - 1);
}

int str_len(char *s)
{
  int i;

  i=0;

  while (s[i] != '\0')
  {
    i++;
  }
  return(i);
}

char *string_copy(char *dest, const char *src)
{
  char *s = dest;
  while ((*s++ = *src++) != 0)
  ;
  return (dest);
}
