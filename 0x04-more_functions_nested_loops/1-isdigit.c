#include "main.h"

/**
 * _isdigit - checks for a digit from 0 to 9
 * @c: integer to be checked
 * Return: 1 if c is a digit and 0 if otherwise
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	return (0);
}
