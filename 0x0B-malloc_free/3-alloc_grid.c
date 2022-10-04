#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - a function that returns a pointer to a two dimensional
 * array of integers
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (success), NULL (error(
 */

int **alloc_grid(int width, int height)
{
	int **pen;
	int x, y;

	if (height <= 0 || width <= 0)
		return (NULL);

	pen = (int **) malloc(sizeof(int *) * height);

	if (pen == NULL)
		return (NULL);

	for (x = 0 ; x < height ; x++)
	{
		pen[x] = (int *) malloc(sizeof(int) * width);
		if (pen[x] == NULL)
		{
			free(pen);
			for (y = 0 ; y <= x ; y++)
				free(pen[y]);
			return (NULL);
		}
	}

	for (x = 0 ; x < height ; x++)
	{
		for (y = 0 ; y < width ; y++)
		{
			pen[x][y] = 0;
		}
	}
	return (pen);
}
