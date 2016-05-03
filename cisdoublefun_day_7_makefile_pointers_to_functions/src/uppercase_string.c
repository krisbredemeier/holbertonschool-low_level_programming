/*changes all lowercase letters of a string to uppercase*/

char *uppercase_string(char *n) {
  int i =0;
while(n[i] != '\0') {
    if (n[i] >= 'a' && n[i] <= 'z')
    n[i] = n[i] - 32;
    i++;
  }
return(n);
}
