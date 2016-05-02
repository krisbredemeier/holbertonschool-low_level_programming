/* convert a letter to lowercase if possible */
char lowercase(char c)
{
  int conv = 'a' - 'A';

  if (c >= 'A' && c <= 'Z')
    {
      return (c + conv);
    }
  else
    {
      return (c);
    }
	}
