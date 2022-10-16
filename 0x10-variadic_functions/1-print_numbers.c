#include "variadic_functions.h"

/**
 * print_numbers - a function that prints a number,followed by a new line
 * @separator: string separator
 * @n: number of arguments
 * @...: integers to print
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list sa;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(sa, n);
	while (i--)
		printf("%d%s", va_arg(sa, int),
				i ? (separator ? separator : "") : "\n");
	va_end(sa);
}
