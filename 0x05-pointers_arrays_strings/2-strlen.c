#include "main.h"

/**
 * _strlen - gives the length of a string
 * @s: string in consideration
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
