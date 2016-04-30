int find_it (int, int);

int square_root(int n)
{
  int i;
  int temp;

  temp = 0;
  i = 0;

  temp = find_it(n, i);
  return (temp);
}

int find_it (int n, int i)
{
  i = 0;
  if (n == 1)
  {
    return (1);
  }
  return (n);
}
