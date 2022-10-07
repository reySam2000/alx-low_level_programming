#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - a function that allocates memory for an array using malloc
 * @nmemb: amount of element in array
 * @size: size in byte of the array
 *
 * Return: void pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	m = malloc(nmemb * size);
	if (m == NULL)
		return (NULL);
	for (x = 0 ; x < (nmemb * size) ; x++)
		m[x] = 0;
	return (m);
}
