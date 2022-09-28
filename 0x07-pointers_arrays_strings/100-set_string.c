#include "main.h"

/**
 * set_string - a function that sets the value of a pointer to a char
 * @s: pointer to the pointer we are to set to
 * @to: string to set
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
