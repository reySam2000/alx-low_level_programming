#include "variadic_functions.h"

/**
 * print_strings - a function that print strings, followed by a new line
 * @separator: string separator
 * @n: number of arguments
 * @...: strings to print
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list sa;

	va_start(sa, n);
	if (separator == NULL)
		separator = "";
	for (i = 0 ; i < n ; i++)
	{
		str = va_arg(sa, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
