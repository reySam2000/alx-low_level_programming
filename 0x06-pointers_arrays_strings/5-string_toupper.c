#include "main.h"

/**
 * *string_toupper - change lowercase letter of a string
 * to uppercase
 * @s: string to modify
 *
 * Return: the result
 */
char *string_toupper(char *s)
{
	int x;

	for (x = 0; s[x] != '\0' ; x++)
	{
		if (s[x] >= 'a' && s[x] <= 'z')
			s[x] = s[x] - 32;
	}

	return (s);
}
