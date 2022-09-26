#include "main.h"

_memset - Fill memory with a constant byte
@s: memory area to fill
@b: constant byte to fill
@n: bytes of memory area to fill

*_memset(char *, char b, unisgned int n)
	unsigned int a;

	for (a = 0; a < n; a++)
{
	s[a] = b;
}
return (s);
