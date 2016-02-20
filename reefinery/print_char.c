#include <unistd.h>
#include "my_functions.h"
int print_char(char c)
{
  return (write(1, &c, 1));
}
