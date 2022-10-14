#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * @...: a variable number of numbers to be printed
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int index;
	int i;

	va_start(num, n);
	for (index =  0 ; index < n ; index++)
	{
		i = va_arg(num, int);
		printf("%d", i);
		if (index < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}
