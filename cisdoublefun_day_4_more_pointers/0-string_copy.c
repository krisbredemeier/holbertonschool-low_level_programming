/*copies a string*/
 char *string_copy(char *dest, const char *src)
 {
   char *s = dest;
   while ((*s++ = *src++) != 0)
   ;
   return (dest);
 }
