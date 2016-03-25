int prime(int n, int i)
{
  if(n <=1) return 0;
  if(i > n/2) return 1;
  if(n%i==0) return 0;
  return prime(n, i+1);
}


int is_prime_number(int n)
{
  return prime(n, 2);
}
