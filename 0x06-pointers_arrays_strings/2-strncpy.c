#include "main.h"

/**
 * *_strncpy - copy the string pointed to by src
 * @src: source pointer
 * @dest: pointer to the buffer
 * @n: length of bytes to be copird
 *
 * Return: pointer to the result
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0 ; x < n && src[x] != '\0' x++)
		dest[x] = src[x];

	for (; x < n ; x++)
		dest[x] = '\0';

	return (dest);
}
