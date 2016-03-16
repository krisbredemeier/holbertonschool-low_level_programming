/*encode a string using rot13*/
char *rot13(char *n) {
for( int i=0; n[i] != '\0'; i++ ){
	if(n[i] >= 'a' && n[i] <= 'm'){
		n[i] += 13;
	}
	else if(n[i] > 'm' && n[i] <= 'z'){
		n[i] -= 13;
	}
	else if (n[i] >= 'A' && n[i] <= 'M'){
		n[i] += 13;
	}
	else if(n[i] > 'M' && n[i] <= 'Z'){
		n[i] -= 13;
	}

}
return(n);
}
