#include <unistd.h>
void two_square(int n);
int print_char(char c);

void print_square(int n)
{
  int hyphen, stack, ncopy, space;
  ncopy = n;
    if(ncopy == 1){
      print_char('o');
      print_char('\n');
    }

    if(ncopy == 2){
      two_square(ncopy);{}
    }

    if(ncopy > 2){
      print_char('o');
        for(hyphen = ncopy; hyphen > 0; hyphen--){
          print_char('-');}
          print_char('o');
          print_char('\n'); {
        for(stack = ncopy; stack >0; stack--) {
          print_char('|');
        for(space = ncopy; space > 0; space--) {
          print_char(' ');}
          print_char('|');
          print_char('\n');}
        if(ncopy > 2){
          print_char('o');
        for(hyphen = ncopy; hyphen > 0; hyphen--) {
          print_char('-');}
          print_char('o');
          print_char('\n'); }
      }
    }
  }






void two_square()
{
    print_char('o');
    print_char('o');
    print_char('\n');
    print_char('o');
    print_char('o');
    print_char('\n');
  }


  int print_char(char c)
  {
  return (write(1, &c, 1));
  }
