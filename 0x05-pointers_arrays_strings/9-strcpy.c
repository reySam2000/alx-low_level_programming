#include "main.h"

/**
 * *_strcpy - copies string pointed by src
 * also include the terminating null byte (\0) to the buffer pointed to by the dest
 * @dest: pointer to the buffer where we copy the string
 * @src: string to be copied
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int del, x;

	del = 0;

	while (src[del] != '\0')
	{
		del++;
	}

	for (x = 0 ; x < del ; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';

	return (dest);
}
