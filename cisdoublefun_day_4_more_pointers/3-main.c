/* Main Method */
#include <stdio.h>
char string_string(const char *haystack, const char *needle);

int main(void)
{
	const char *haystack;
  char *subb;

  haystack = "avmeooamvoemeneedleamoemowie\n";
  subb = string_string(haystack, "needle");

    printf ("%s", haystack);
    printf ("%s", subb);
	return 0;
}
