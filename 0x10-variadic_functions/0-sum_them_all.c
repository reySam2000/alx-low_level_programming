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
	va_list;

	va_start(list, n);

	for (x = 0 ; x < n ; x = x + 1)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
