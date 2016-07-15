void print_string_half(char *str)
{
  int half;
  int count;
  half = str_len(count) / 2;
  if (str_len(count) % 2 != 0)
  {
    length = (str_len(count) -1) / 2;
  }
  return str + half;
}

int str_len (char * str)
{
  int count;
  while (*str != '\0')
  {
    count++;
    str++;
  }
  return count;
}
