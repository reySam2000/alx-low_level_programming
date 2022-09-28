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
	int x;

	unsigned int dom1, dom2;

	dom1 = 0;
	dom2 = 0;

	for (x = 0 ; x < size ; x++)
	{
		dom1 += a[(size * x) + x];
		dom2 += a[(size *(x + 1)) - (x + 1)];
	}

	printf("%d, %d\n", dom1, dom2);
}
