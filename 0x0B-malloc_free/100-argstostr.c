#include <stdlib.h>
#include "main.h"

/**
 * *argstostr - a function that concatenates all the arguments of the program
 * @c: amount of arguments
 * @av: array of arguments
 *
 * Return: pointer to the new string (success), NULL (Error)
 */

char *argstostr(int ac, char **av)
{
	int x, y, z, bob;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0 ; x < ac ; x++)
	{
		for (y = 0 ; av[x][y] != '\0' ; y++)
			bob++;
		bob++;
	}

	str = malloc(sizeof(char) * (bob + 1));

	if (str == NULL)
		return (NULL);

	z = 0;

	for (x = 0 ; x < ac ; x++)
	{
		for (y = 0 ; av[x][y] != '\0' ; y++)
		{
			str[z] = av[x][y];
			z++;
		}
		str[z] = '\n';
		z++;
	}

	return (str);
}
