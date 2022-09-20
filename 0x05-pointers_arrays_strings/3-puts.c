#include "main.h"

/**
 * _puts - return a string to stdout
 * @str: printed string pointer
 */

void _puts(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
