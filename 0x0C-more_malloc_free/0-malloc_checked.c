#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - a function that allocates memory using malloc
 * @b: amount of bytes to allocate
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *cum;

	cum = malloc(b);

	if (cum == NULL)
		exit(98);

	return(cum);
}
