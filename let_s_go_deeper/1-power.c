int power(int x, int y)
{
  if(y==0)
    return 1;
  if(y<0)
    return -1;
  else {
    y--;
    return power(x, y)*x;
  }
}
