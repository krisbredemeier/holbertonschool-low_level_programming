/*but is it really...?*/
int really_prime_or_not ( int n, int i);
int is_prime_number(int n)
{
  return really_prime_or_not(n, 2);
}

int really_prime_or_not ( int n, int i)
{
  if (n <= 1)
  {
    return 0;
  }
  if (i > n/2)
  {
    return 1;
  }
  if (n%i == 0)
  {
    return 0;
  }
  return really_prime_or_not(n, i+1);
}
