int print_char(char c);
void print_positive( int i);
int  number_digits (int i);
void print_int_to_char (int i);

/*  print any integer  */
void print_number ( int i)
{
	if( i == 0 ){
		print_char(48);
	}
	else if ( i > 0){
		print_positive(i);
	}
	else if (i == -2147483648 ){
		print_char('-');
		print_positive(214748364);
		print_char('8');
	}
	else {
		print_char('-');
		i = -i ;
		print_positive(i);
	}
}

/*  print positive integer  */
void print_positive(int i)
{
 	int d = number_digits(i);
	int j = d ;
	char numberChar[100];
	int n = i;
	int c = 0;
	while (n != 0){
	    numberChar[c] = n % 10 + '0';
	    n /= 10;
	    c++;
	}
	while (j != 0){
		j = j-1;
		print_char(numberChar[j]);
	}
}

/*  return the number of digit of a positive integer  */
int  number_digits (int i)
{
	int n = i;
	int c = 0;

	while (n != 0){
	    n /= 10;
	    c++;
	}
	return (c);
}
