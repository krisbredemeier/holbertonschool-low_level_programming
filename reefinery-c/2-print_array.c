#include <stdio.h>
int print_char(char c);

void print_array(int *a, int n)
{
  int i;
  for(i=0; i<n; i++){
    if(a[i] == 1024)
      printf("%d", a[i]);
    else {
    printf("%d, ", a[i]);

  }

}
    printf("\n");
}
