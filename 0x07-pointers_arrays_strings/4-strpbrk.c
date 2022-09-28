#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - a function that searches a string for any of a set of bytes
 * @s: string to check
 * @accept: string to check against
 *
 * Return: pointer to byte in s that matches or NULL if no match
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0 ; *s != '\0' ; a++)
	{
		for (b = 0 ; accept[b] != '\0' ; b++)
		{
			if (*s == accept[b])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
