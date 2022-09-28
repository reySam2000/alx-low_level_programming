#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: string to check
 * @accept: string containing the list of character
 *
 * Return: number of bytes in first argument
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b, c, cum;

	c = 0;

	for (a = 0 ; s[a] != '\0' ; a++)
	{
		cum = 0;
		for (b = 0 ; accept[b] != '\0' ; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				cum = 1;
			}
		}
		if (cum == 0)
		{
			return (c);
		}
	}

	return (0);
}
