#include <unistd.h>
#include "str_struct.h"
/*function that prints the content of a struct String*/
int print_char(char c);
void print_number(int n);

void print_string_struct(struct String *str)
{
 int i;

 i = 0;
 while (i < str->length)
 {
   print_char(str->str[i]);
   i++;
 }
 print_char(',');
 print_char(' ');
 print_char(str->length + '0');
 print_char('\n');
}

/*prints a number*/

void print_number(int n)
{
 int i;
 int temp;
 int x;
 int i2;

 i = 1;
 x = 1;
 if (n < 0)
 {
   print_char('-');
   x = -1;
 }
 for (temp = n; temp > 9 || temp < -9;temp = temp / 10)
 {
   i++;
 }
 while (i)
 {
   i2 = i--;
   temp = n;
   while (i2-- > 1)
   {
     temp /= 10;
   }
   print_char(((temp % 10) * x + '0'));
 }
}

int print_char(char c)
   {
         return (write(1, &c, 1));
   }
