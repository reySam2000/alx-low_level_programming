#include <stdarg.h>
#include "variadic_function.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: number of arguments passed to function
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	int sum = 0;
	va_list valist;

	if (n == 0)
		return (0);

	va_start(valist, n);
	for (x = 0 ; x < n ; x++)
		sum += va_arg(valist, int);
	va_end(valist);
	return (sum);
}
