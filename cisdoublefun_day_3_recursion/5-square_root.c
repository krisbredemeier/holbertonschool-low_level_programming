/*find the natural square root*/
int find_it (int, int);

int square_root(int n)
{
  return(find_it(n, 0));
}

int find_it (int n, int i)
{
  if (i * i > n || n < 0)
  {
    return(-1);
  }
  if (i * i == n)
  {
    return(i);
  }
  return(find_it(n, i+1));
}
