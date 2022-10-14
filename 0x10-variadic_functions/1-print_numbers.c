#include <stdio.h>
#include "variadic_funtions.h"

/**
 * print_numbers - print numbers, followed by a new line
 * @separator: string to print between numbers
 * @n: number of integers passed to the function
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ment;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(ment, n);
	while (i < n)
	{
		if (i != 0 && separator)
			printf("%s", separator);
		printf("%d", (int)va_arg(ment, int));
		i++;
	}
	va_end(ment);
	printf("\n");
}
