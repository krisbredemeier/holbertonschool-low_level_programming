
int power(int x, int y)
{
  int i;
  int long sum;

  sum = 1;
  i = 1;

  if (y == 0)
  {
    return 1;
  }
  if (y < 0)
  {
    return -1;
  }


  while (i<=y)
  {
    sum = sum * x;
    i++;
  }
  if (sum > 2147483647)
  {
    return (-1);
  }
  if (sum < -2147483648)
  {
    return (-1);
  }
  return(sum);
}
