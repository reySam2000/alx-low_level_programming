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
	int i = n;
	char *str;
	va_list sa;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(sa, n);
	while (i--)
		printf("%s%s", (str = va_arg(sa, char *)) ? str : "(nil)",
				i ? (separator ? separator : "") : "\n" );
	va_end(sa);
}
