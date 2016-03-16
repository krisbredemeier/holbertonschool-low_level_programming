/*encodes a stirng in 1337*/
char *leet(char *n){
int i;
for(i=0; n[i] != '\0'; i++) {
  if(n[i]=='e')
    n[i]='3';
  else if (n[i]=='E')
    n[i]='3';
  else if (n[i]=='t')
    n[i]='7';
  else if (n[i]=='T')
    n[i]='7';
  else if (n[i]=='a')
    n[i]='4';
  else if (n[i]=='A')
    n[i]='4';
  else if (n[i]=='o')
    n[i]='0';
  else if (n[i]=='O')
    n[i]='0';
  else if (n[i]=='l')
    n[i]='1';
  else if (n[i]=='L')
    n[i]='1';
  }
  return(n);
}
