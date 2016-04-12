#include <stdlib.h>
#include <unistd.h>
char printpositive(int n);
int print_char(char c);
char *int_to_string(int n);

char *int_to_string(int n)
{
  if (n == 0){
      print_char('0');
    }
   if (n == -2147483648){
      n = n * -1;
      print_char('-');
      printpositive(214748364);
      print_char('0' + 8);
  }
  if (n > 0){
      printpositive(n);
  }
  if (n < 0 && n > -2147483648){
      n = n * -1;
       print_char('-');
      printpositive(n);
      }
}

char printpositive(int n)
{
  int number_of_digits = 1;
  char** number_of_digits;
  int k;
  ncopy = n;
  while(ncopy>9)
  ncopy = ncopy /10;
  nuber_of_digits++;
}
  string_array = malloc((sizeof(char))*(number_of_digits));
  if(string_array==NULL) {
    return (0);
  }
    while(n>0){
      print_me = n / power;
      n % = power;
      power /=10;
      string_array[i]= (print_me + '0');
      i++;
    }

int print_char(char c)
{
 return (write(1, &c, 1));
}
