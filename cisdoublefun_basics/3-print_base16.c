/*this function prints base 16*/
int print_char(char c);

void print_base16(void)
{
  char i;
  i='0';
  int c;
  c=65;

  while (i>='0' && i<='9')
  {
    print_char(i);
    i++;
  }
  while (c>=65 && c<=70)
  {
    print_char(c);
    c++;
  }
}
