/*prints triangle with n as height*/
int print_char(char c);

void print_triangle(int n)
{
  int i;
  int j;
  i=0;

  while(i<n)
  {
    j=0;
    while(j<=i)
    {
      print_char('*');
      j++;
    }
      print_char('\n');
      i++;
  }
}
