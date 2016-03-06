/*function that retruns the fist number constrained in a string*/
int string_to_integer(char *s) {
int x = 0;
	int sign = 1;
	long r = 0;
	while (	*(s+x) != '\0' ){
		int c = *(s+x)+0;
		int cc = *(s+x+1)+0;
		if( c == 45  ){
			sign *=(-1);
		}
		/*only prints numbers*/
		if( c > 47 && c < 58){
			int t = c - '0' ;
			r =  r + t ;
			/*takes care of smallest and largest numbers*/
			if( (r > 2147483647 && sign == 1 ) || (r > 2147483648  && sign == -1 ) ){
				return 0 ;
			}
			/*does not print anything but numbers*/
			if( cc < 47 || cc > 58){
				break;
			}
			r *= 10;
		}
		x +=1;
	}
	return r*sign;
}
