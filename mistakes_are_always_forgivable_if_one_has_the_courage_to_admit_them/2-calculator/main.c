#include <stdlib.h>
#include <unistd.h>

int print_char(char c);
void print_number(int n);
int(*get_op_func(char c))(int, int);
int(*op_function)(int, int);

int main(int argc, char *argv[])
{
    if(argc!= 4){
      return 1;
    }
      op_function = get_op_func(*argv[2]);
      if(op_function==0){
        return 1;
      }
      int i;
      i = op_function(atoi(argv[1]),atoi(argv[3]));
      print_number(i);
      print_char('\n');
      return 0;
  }




  void print_number(int n)
  {
  int digits; int temp; int power; int singledigit; char chardigit; int digitscopy;
  /* this takes care of 0 and negative numbers*/
  if ( n == 0 ) {
  	print_char('0');
  	return; }
  if ( n < 0 ) {
  	print_char ('-');
  	n = n * -1; }
  /*figure out number of digits in the varaible*/
  temp = n;
  digits =0;
  while (temp > 0) {
  	temp = temp / 10;
  	digits++; }
  digitscopy = digits; /*store the value into copy*/
  for (power = 1; digits > 1; digits--) {
  	power = power * 10; }
  /*start loop */
  for (; digitscopy > 0; digitscopy--) {
  	singledigit = n /power; /*divide n by power */
  	chardigit = singledigit + '0'; /*print the digit */
  	print_char(chardigit);
  	n = n - (power * singledigit); /* subtract (power * digit) from n */
  	power = power / 10; /*end loop*/
  	}
  }

  int print_char(char c)
  {
    return (write(1, &c, 1));
  }
