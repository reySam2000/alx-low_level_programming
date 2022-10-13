#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: array to search in
 * @size: size of array
 * @cmp: pointer to comparing function
 *
 * Return: index of the first element in which the cmp function does not
 * return 0, or -1 if no match is found or size is negative
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array && cmp)
	{
		for (x = 0 ; x < size ; x++)
		{
			if (cmp(array[x]) != 0)
				return (x);
		}
	}

	return (-1);
}
