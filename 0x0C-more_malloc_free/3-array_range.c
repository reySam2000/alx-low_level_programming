#include <stdlib.h>
#include "main.h"

/**
 * *array_range - a function that creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and amount of element
 *
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int *cum;
	int x, pus;

	if (min > max)
		return (NULL);

	pus = max - min + 1;

	cum = malloc(sizeof(int) * pus);

	if (cum == NULL)
		return (NULL);

	for (x = 0 ; min <= max ; x++)
		cum[x] = min++;

	return (cum);
}
