/*prints all possible combinations of three different digits*/
int print_char(char c);
void print_number ( int i);

void print_combination_3(void)
{
  int i;
  int j;
  int k;

  for(i=0;i<8;i++)
  {
    for(j = i+1; j<9; j++)
    {
      for(k = j+1; k<10; k++)
      {
        if(i==7 && j==8 && k==9)
        {
          print_number(789);
        }
        else {
          print_number(i);
          print_number(j);
          print_number(k);
          print_char(',');
          print_char(' ');
        }
      }
    }
  }
}
