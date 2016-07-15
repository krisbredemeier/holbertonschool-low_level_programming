int absolute(int n)
{
  int sign;

  sign = (n * -1);
  if (n < 0)
  {
    return sign;
  }
  if (n == -2147483647)
  {
    return 2147483647;
  }
  else
 return n;
}
