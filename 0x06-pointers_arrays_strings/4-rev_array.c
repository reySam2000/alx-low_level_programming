#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: array to be reversed
 * @n: number of elements inside the array
 */
void reverse_array(int *a, int n)
{
	int x, y, del;

	y = n -1;

	for (x = 0 ; x < n / 2 ; x++)
	{
		del = a[x];
		a[x] = a[y];
		a[y--] = del;
	}
}
