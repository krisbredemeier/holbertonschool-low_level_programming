/*capitalizes all words of a string*/

char *cap_string(char *n)
  {
      int i;
      for(i=0; n[i] != '\0'; i++)
      {
          if ((n[0] >= 'a' && n[0] <= 'z') || (n[i-1]==' ' && n[i]>='a' && n[i]<='z'))
          n[i] = (n[i] -32);

      }
      return(n);
  }
