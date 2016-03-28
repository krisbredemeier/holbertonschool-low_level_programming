int is_prime_number(int n)
{
  static int i=2;
    if(n%i==0&&n!=2)
    {
      return 1;
    }
      if(i<n)
      {
        i++;
        is_prime_number(n);
      }
  return 0;
}
