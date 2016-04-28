/*fuction returns the fist number in a given string*/
#include <limits.h>
int string_to_integer(char *s)
{
  int x;
  int c;
  int cc;
  int t;
  int sign;
  int long y;

  x=0;
  sign=1;
  y=0;

    while (*(s+x) != '\0')
      {
        c = *(s+x)+0;
        cc = *(s+x+1)+0;
        if(c == 45)
        {
          sign *=(-1);
        }
          if(c > 47 && c < 58)
          {
            t = c - '0';
            y = y+t;

            if((y > INT_MAX && sign == 1) || (y < INT_MIN && sign == -1))
            {
              return 0;
            }

            if(cc < 47 || cc > 58)
            {
              break;
            }

            y *= 10;
          }
          x += 1 ;
        }
        return y *sign;
}
