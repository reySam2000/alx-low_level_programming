#include "main.h"
#include <stdio.h>

/**
 * *_strchr - a function that locates a character in a string
 * @s: string to search
 * @c: char to find
 *
 * Return: pointer to check in s with c or null
 */

char *_strchr(char *s, char c)
{
	int p;

	while (1)
	{
		p = *s++;
		if (p == c)
		{
			return (s - 1);
		}
		if (p == 0)
		{
			return(NULL);
		}
	}
}
