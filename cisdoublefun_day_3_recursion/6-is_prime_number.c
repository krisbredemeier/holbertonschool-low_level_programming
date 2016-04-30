int really_prime_or_not ( int n, int i);
int is_prime_number(int n)
{
  int p;

  p = really_prime_or_not(n, n);

  if (p == 1)
  {
    return 1;
  }
  else 
    return (0);
  return 0;
}

int really_prime_or_not ( int n, int i)
{
  if (i == 0)
  {
    return 1;
  }
  if (n%i == 0)
  {
    return 0;
  }
  return really_prime_or_not(n, i-1);
}
