#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - a function that allocates memory using malloc
 * @b: amount of bytes to allocate
 *
 * Return: pointer to the allocated memory or normal process termination on error
 */
void *malloc_checked(unsigned int b)
{


	void *m;

	m = malloc(b);
	if (m == NULL)
		exit(98);
	return (m);
}
