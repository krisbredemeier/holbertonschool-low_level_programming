/*fuction returns the fist number in a given string*/
#include <limits.h>
int string_to_integer(char *s)
{
  int i;
  int sign;
  int long number;
  int temp;

  i=0;
  sign=1;
  number = 0;

    while (s[i] != '\0' && (s[i]< '0' || s[i]>'9'))
      {
        if(s[i] == '-')
        {
          sign *=-1;
        }
        i++;
      }
      while (s[i] != '\0' && (s[i] >= '0'&& s[i]<= '9'))
        {
          number *= 10;
          temp = s[i] - '0';
          number += temp;
          i++;
        }
        if((number > INT_MAX && sign == 1) ||
        (sign == -1 && (-1 * number < INT_MIN) ))
            {
              return 0;
            }
      return number * sign;
  }
