/*prints the alphabet using ASCII*/
#include <stdio.h>
int print_char(char c);

void print_alphabet(void)
{
  int i;
  i=97;
    while(i<=122)
    {
      print_char(i);
      i++;
    }
}
