/*i've got the power*/
int power(int x, int y)
{
  int temp;

  if (y == 0)
  {
    return 1;
  }
  if (y < 0)
  {
    return -1;
  }
  else if (x < 0)
  {
    return -1;
  }


  temp = power(x, y/2);
  if (y%2 == 0)
  {
    return temp*temp;
  }
  else if (x > 2147483647/power(x, (y-1)))
  {
    return -1;
  }
  else {
    return x*temp*temp;
  }
}
