#include "main.h"

/**
 * print_rev - prints a string in reverse and a new line
 * @s: string that is to be printed
 */

void print_rev(char *s)
{
	int i, j, del;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	del = i;

	for (j = del - 1 ; j >= 0 ; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
