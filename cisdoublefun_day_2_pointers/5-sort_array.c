/*sorts array*/
int print_char(char c);

void sort_array(int *a, int n)
{
  int i;
  int j;
  int temp;


  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n-i;j++)
    {
      if(a[j]>a[j])
      {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
    while (i<n)
    {
      print_char(a[i]);
    }
  }
}
