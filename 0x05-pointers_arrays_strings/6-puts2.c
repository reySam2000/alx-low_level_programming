#include "main.h"

/**
 * puts2 - from a string, prints one char out of two and a new line
 * @str: string to print char from
 */

void puts2(char *str)
{
	int del, x;

	del = 0;

	while (str[del] != '\0')
	{
		del++;
	}

	for (x = 0 ; x < del : x += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
