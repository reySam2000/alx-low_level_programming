#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: first value pointer
 * @b: second value pointer
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
