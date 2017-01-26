void quick_sort(int *array, int size)
{
  int pivot;
  int low;
  int high;
  int tmp;

  pivot = array[size/2];
  low = -1;
  high = size;
  tmp = 0;

  if (size <= 1)
  {
    return;
  }

  while (low < high)
  {
    do {
      low++;
    }
    while (array[low] < pivot);
    {
      do {
        high--;
      }
      while (array[high] > pivot);
        if (low < high){
          tmp = array[low];
          array[low] = array[high];
          array[high] = tmp;
        }
  }
  quick_sort(array, low);
  quick_sort(&(array[low]), size - low);
}
}
