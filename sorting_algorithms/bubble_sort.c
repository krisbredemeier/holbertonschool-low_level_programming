/*
 * function that sort an array on integers
 * in ascending order using a Bubble sort
*/
void bubble_sort(int *array, int size)
{
  int i;
  int j;
  int tmp;

  i=0;
  j=0;
  for (i = 0; i < size; i++)
  {
    for (j = 0; j < size; j++)
    {
      if (array[j] > array[j+1])
      {
        if (j != size -1)
        {
        tmp = array[j];
        array[j] = array[j+1];
        array[j+1] = tmp;
        }
      }
    }
  }
}
