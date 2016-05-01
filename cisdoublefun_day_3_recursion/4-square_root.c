/*finds natural square root*/
int square_root(int number)
{
  int x;

  x = 1;
  while (x <= number)
  {
    if (number == x * x)
    {
    return (x);
    }
  else
  {
    x++;
  }
}
  return (-1);
}
