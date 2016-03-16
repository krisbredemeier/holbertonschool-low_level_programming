/*capitalizes all words of a string*/

char *cap_string(char *n)
  {
      int i;
      for(i=0; i != ' '; i++)
      {
          if ((n[i-1]==' ' && n[i]>='a' && n[i]<='z'))
          n[i] = (n[i] -32);
      }
      return(n);
  }
