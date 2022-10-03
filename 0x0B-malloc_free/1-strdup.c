#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a
 * parameter
 * @str: string to copy
 *
 * Return: pointer to copied string (success), NULL (error)
 */

char *_strdup(char *str)
{
	char *cum;
	unsigned int x, pus;

	x = 0;
	pus = 0;

	if (str == NULL)
		return (NULL);

	while (str[pus])
		pus++;

	cum = malloc(sizeof(char) * (pus + 1));

	if (cum == NULL)
		return (NULL);

	while ((cum[x] = str[x]) != '\0')
		x++;

	return (cum);
}
