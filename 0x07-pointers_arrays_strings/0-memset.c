#include "main.h"
/**
 * _memset -fills memory with a constant byte
 * @s: source string
 * @b: contant byte for filling
 * @n: lenght of buffer
 * Return: new string.
 */
void *_memset(void *s, int c, size_t n)
{
unsigned int index;
unsigned char *memory = s, value = c;
for (index = 0; index < n; index++)
memory[index] = value;
return (memory);
}
}
