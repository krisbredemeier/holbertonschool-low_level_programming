/*checks to see if number is positve or not*/
int print_char(char c);

void positive_or_not(int n)
{

  if(n<=0)
  {
    if(n == 0)
      print_char('Z');
    else
      print_char('N');
  }
  else
    print_char('P');
}
