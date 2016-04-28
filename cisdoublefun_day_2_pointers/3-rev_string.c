/*function reverses a string*/
int string_length (char *str);

char *rev_string(char *str)
{
  int i;
  int j;
  int temp;


  j = string_length(str) -1;

  while (i<j)
  {
    temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    i++;
    j--;
  }
return(str);
}

int string_length (char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    i++;
  }
  return(i);
}
