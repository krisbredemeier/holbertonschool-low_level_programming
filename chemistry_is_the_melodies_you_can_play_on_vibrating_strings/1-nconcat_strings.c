#include "my_functions.h"
char *nconcat_strings(char *dest, const char *src, int n);
char *nconcat_strings(dst, src, n)
	char *dst;
	const char *src;
	int n;
{
	if (n != 0) {
		register char *d = dst;
		register const char *s = src;

		while (*d != 0)
			d++;
		do {
			if ((*d = *s++) == 0)
				break;
			d++;
		} while (--n != 0);
		*d = 0;
	}
	return (dst);
}
