
#include "main.h"

/**
 * print_sign - prints number sign
 * @n: check this integer
 * Return: 1 and prints + if n is greater than 0
 * 0 and prints 0 if n is equal to zerp
 * -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
