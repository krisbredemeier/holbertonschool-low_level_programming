#include <limits.h>
/*function that retruns the fist number constrained in a string*/
/* begins to figure out what the character is in the ascii table*/
int string_to_integer(char *s) {
int x = 0, sign = 1; long y = 0;
	while (	*(s+x) != '\0' ){
		int c = *(s+x)+0;
		int cc = *(s+x+1)+0;
		/*identifies negative numbers*/
		if( c == 45  ){
			sign *=(-1);
		}
		/*only prints numbers*/
		if( c > 47 && c < 58){
			int t = c - '0' ;
			y =  y + t ;
			/*takes care of smallest and largest numbers*/
			if( (y > INT_MAX && sign == 1 ) || (y < INT_MIN  && sign == -1 ) ){
				return 0 ;
			}
			/*does not print anything but numbers*/
			if( cc < 47 || cc > 58){
				break;
			}
			y *= 10;
		}
		x +=1;
	}
	return y*sign;
}
