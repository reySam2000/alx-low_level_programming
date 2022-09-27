#include "main.h"

/**
 * *_memset - a function that fills memory with a constant byte
 * @s: memory space to be filled
 * @b: character to copy
 * @n: number of times to copy
 *
 * Return: pointer to the memory space
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}

	return (s);
}
