/*function that retruns the fist number constrained in a string*/
int string_to_integer(char *s)
{
	int i = 0;
	int sign = 1;
	long r = 0;
	while (	*(s+i) != '\0' ){
		int c = *(s+i)+0;
		int cc = *(s+i+1)+0;
		if( c == 45  ){
			sign *=(-1);
		}
		if( c > 47 && c < 58){
			int t = c - '0' ; 
			r =  r + t ; 
			if( (r > 2147483647 && sign == 1 ) || (r > 2147483648  && sign == -1 ) ){
				return 0 ; 
			}
			if( cc < 47 || cc > 58){
				break;
			}
			r *= 10;
		}
		i +=1;	
	}
	return r*sign;
}
