#include "my_functions.h"
void two_square(int n);
void print_square(int n) 

{
int hyphen, space, stack, ncopy; 
ncopy = n;
if (ncopy == 1){
    print_char('o');
    print_char('\n'); }
    if (ncopy == 2 ) {
two_square(ncopy);}
    if (ncopy > 2) {
        print_char('o'); /*and n-2 hyphens*/
        for (hyphen = ncopy; hyphen > 2; hyphen--) {
            print_char('-'); }
            print_char('o');
            print_char('\n'); {
            for (stack = ncopy; stack > 2; stack--) {
                print_char('|');
                for (space = ncopy; space > 2; space--) {
                    print_char(' '); }
                    print_char('|');
                    print_char('\n'); }
        if (ncopy > 2) {
        print_char('o'); /*and n-2 hyphens*/
        for (hyphen = ncopy; hyphen > 2; hyphen--) {
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

void more_than()
{

    
}
