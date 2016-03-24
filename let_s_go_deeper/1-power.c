int power(int x, int y)
{
  int result = 1;
  if(y<0)
    return -1;
  while(y)
  {
    result = result * x;
    y--;
  }
  return result;
}
