#include <unistd.h>

/* prints P if arg is +, N if -, and Z if it is 0;
   takes an int */
int print_char(char c);

void positive_or_not(int n)
{

  /* print appropriate letter */
  if (n > 0)
      {
	print_char('P');
      }
    else if (n < 0)
      {
	print_char('N');
      }
    else
      {
	print_char('Z');
      }

}




int print_char(char c)
{
      return (write(1, &c, 1));
}
