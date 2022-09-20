#include "main.h"

/**
 * puts_half - prints half of a string and a new line
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int del, m, x;

	del = 0;

	while (str[del] != '\0')
	{
		del++;
	}

	if (del % 2 == 0)
	{
		for (x = del / 2 ; str[x] != '\0' ; x++)
		{
			_putchar(str[x]);
		}
	} else if (del % 2)
	{
		for (m = (del - 1) / 2 ; m < del - 1 ; m++)
		{
			_putchar(str[m + 1]);
		}
	}
		_putchar('\n');
}
