//finds squre root of number
int calculate_sqrt(int n, int r, int i);

int square_root(int n)
{
  int r=0, i=1;
  if(n<=0) return -1;
  return (calculate_sqrt(n,r,i));
}

int calculate_sqrt(int n, int r, int i)
{
  if(n<0) return -1;
  else if(n == 0) return r;
  else {
    n-=i;
    i+=2;
    r++;
    return calculate_sqrt(n,r,i);
  }
}
