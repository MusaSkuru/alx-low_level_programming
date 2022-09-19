#include "main.h"

/**
 * puts_half - funtion that prints half of a string, followed by a new line.
 *
 * @Str: This is the input string
 */
void puts_half(char *str)
{
	int index, half;

	index = 0;
	while (sta[index] != '\0')
		index++;
	
	half = index / 2;

	if (index % 2 == 1)
		half++;

	while (half < index)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}

