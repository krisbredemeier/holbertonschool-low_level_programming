#include "my_functions.h"
void print_square(int n)
{
int hyphen, pipe, space, stack, ncopy; 
ncopy = n;
if (ncopy <= 0) 
{}
if (ncopy == 1){
    print_char('o');
    print_char('\n');
    }
if (ncopy == 2 ) {
    print_char('o');
    print_char('o');
    print_char('\n');
    print_char('o');
    print_char('o');
    print_char('\n');
    } 
    if (ncopy > 2) {
        print_char('o'); /*and n-2 hyphens*/
        for (hyphen = ncopy; hyphen > 2; hyphen--) {
            print_char('-');
        }
            print_char('o');
            print_char('\n');
            {
            for (stack = ncopy; stack > 2; stack--) {
                print_char('|');
                for (space = ncopy; space > 2; space--) {
                    print_char(' ');
                }
                    print_char('|');
                    print_char('\n');
                }
        if (ncopy > 2) {
        print_char('o'); /*and n-2 hyphens*/
        for (hyphen = ncopy; hyphen > 2; hyphen--) {
            print_char('-');
        }
            print_char('o');
            print_char('\n');

        }   
        
    }
}
}
