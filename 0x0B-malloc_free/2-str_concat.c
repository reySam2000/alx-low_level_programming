#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - a function that concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string (success), NULL (Error)
 */

char *str_concat(char *s1, char *s2)
{
       	char *s3;
	unsigned int x = 0, y = 0, cum1 = 0, cum2 = 0;

	while (s1 && s1[cum1])
		cum1++;
	while (s2 && s2[cum2])
		cum2++;

	s3 = malloc(sizeof(char) * (cum1 + cum2 + 1));
	if (s3 == NULL)
		return (NULL);

	x = 0;
	y = 0;

	if (s1)
	{
		while (x < cum1)
		{
			s3[x] = s1[x];
			x++;
		}
	}

	if (s2)
	{
		while (x < (cum1 + cum2))
		{
			s3[x] = s2[y];
			x++;
	        	y++;
		}
	}
	s3[x] = '\0';

	return (s3);
}
