#include <unistd.h>
#include<stdio.h>

int print_char(char);

void cross(int n)
{
  int rows;
  int cols;

  for (rows = 1; rows <= n; rows++)
  {
    for (cols = 1; cols <= n; cols++)
    {
      if (rows == cols || cols==(n+1)-rows)
      print_char('x');
      else
      print_char (' ')
    }
    print_char('\n')
  }
}







// {
//   int i;
//   int j;
//
//   for (i = 0; i < n; i++)
//     {
//       for (j = 0; j < n; j++)
//       {
//         if (i == j || j == (n-i-1))
//         {
//           print_char(' ');
//           print_char('x');
//         }
//         else {
//           print_char(' ');
//         }
//       }
//       print_char('\n');
//     }
// }
//
// int print_char(char c)
//   {
//     return (write(1, &c, 1));
//   }
