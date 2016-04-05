/*explores main functions*/
#include <stdio.h>

int main(int argc, char **argv)
{
  printf("%d\n", argc -1);
  if (argv[0]==0)
  {
    printf("WTF");
  }
  return (0);
}
