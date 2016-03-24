int is_prime_number(int n)
{
int i=2;
if(n==1 || n==-1)
return 0;
    while(i<=n/2){
         if(n%i==0)
             return 0;
         else
             i++;
    }
    return 1;
}
