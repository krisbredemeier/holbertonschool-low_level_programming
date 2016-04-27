/*function that swaps two variables*/
void swap_int(int *a, int *b)
{
  int temp;

  temp = *a;
  *a = *b;
  *b = temp;
}
