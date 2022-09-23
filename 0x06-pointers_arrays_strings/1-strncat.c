#include "main.h"

/**
 * *_strncat - concatenates n bytes from one string to another
 * @dest: string destination
 * @src: string source
 * @n: number of bytes of str to concatenate
 *
 * Return: pointer to the result dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	y = 0;

	while (dest[x] != '\0')
		x++;

	while (src[y] != '\0' && y < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';

	return (dest)
}
