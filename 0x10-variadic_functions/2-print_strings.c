#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: no return
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *str;

	va_start(valist, n);

	for (i = 0 ; i < n ; i++)
	{
		str = va_arg(valist, char *);
		if (!str)
			str = "(nill)";
		if (!separator)
			printf("%s", str);
		else if (separator && 1 == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}

	printf("\n");

	va_end(valist);
}
