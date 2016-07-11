/*
 * function that sort an array on integers
 * in ascending order using a Insertion sort
*/
void insertion_sort(int *array, int size)
{
    int tmp;
    int i;
    int j;

    i = 1;
    j = 0;
    while (i < size)
    {
      tmp = array[i];
      j = i-1;
      while (j >= 0 && array[j] > tmp)
      {
        array[j+1] = array[j];
        j = j-1;
      }
      array[j+1] = tmp;
      i++;
    }
}
