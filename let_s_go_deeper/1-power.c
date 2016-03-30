int power(int x, int y)
{
  if(y==0)
    return 1;
  if(y<0)
    return -1;
  y--;
  if((power(x, y)*x) > 2147483647)
    return -1;
  return power(x, y)*x;
}
