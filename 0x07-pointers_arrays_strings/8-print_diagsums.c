#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - a function that prints the sum of the
 * two diagonals of a square matrix of integers
 * @a: square matrix from which we print the diagonal sum
 * @size: matrix size
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int x, y, z, m = 0, n = 0;

	for (x = 0 ; x < size ; x++)
	{
		z = (x * size) + x;
		m += *(a + z);
	}
	for (y = 0 ; y < size ; y++)
	{
		z = (y * size) + (size - 1 - y);
		n += *(a + z);
	}
	printf("%d, %d\n", m, n);
}
