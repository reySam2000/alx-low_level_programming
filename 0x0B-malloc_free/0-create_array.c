#include <stdlib.h>
#include "main.h"

/**
 * *create_array - a function that creates an array of chars, and
 * initializes with a specific char
 * @size: size of the array to create
 * @c:char to initialize
 *
 * Return: pointer to array on success, NULL on error
 */

char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int y = 0;

	if (size == 0)
		return (NULL);

	x = (char *) malloc(sizeof(char) * size);

	if (x == NULL)
		return (0);

	while (y < size)
	{
		*(x + y) = c;
		y++;
	}

	*(x + y) = '\0';

	return (x);
}
