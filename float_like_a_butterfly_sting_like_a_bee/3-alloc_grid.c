#include <stdlib.h>
int **alloc_grid(int width, int height) {
  int i=0;
  int j=0;
  int **outer_grid;
  outer_grid = malloc((sizeof(int *)) * width);
  if(outer_grid == NULL)
    return 0;
  }
    while(i< width){
      outer_grid[i] = malloc((sizeof(int)) * height);
      while(j<height) {
      outer_grid[i][j] = 0;
        j++;
      }
        i++;
        }
          return(outer_grid);
}
