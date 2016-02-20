#include "my_functions.h"
void print_square(int n)
{
int hyphen, pipe, space, stack, ncopy; 
n = ncopy;
if (ncopy <= 0) 
{}
if (ncopy == 1){
    print_char('o' +0);
    print_char('\n');
    }
if (ncopy == 2 ) {
    print_char('o' + 0);
    print_char('o' + 0);
    print_char('\n');
    print_char('o' + 0);
    print_char('o' + 0);
    print_char('\n');
    } 
    if (ncopy > 2) {
        print_char('o'); /*and n-2 hyphens*/
        for (hyphen = ncopy-2; hyphen > 2; hyphen--) {
            print_char('-');
        }
            print_char('o');
            print_char('\n');
            {
            for (stack = ncopy-2; stack > 2; stack--) {
                print_char('|' + 0 );
                for (space = ncopy-2; space > 2; space--) {
                    print_char(' ' + 0);
                }
                    print_char('|' + 0);
                    print_char('\n');
                }
        if (ncopy > 2) {
        print_char('o'); /*and n-2 hyphens*/
        for (hyphen = ncopy-2; hyphen > 2; hyphen--) {
            print_char('-');
        }
            print_char('o');
            print_char('\n');

        }   
        
    }
}
}
