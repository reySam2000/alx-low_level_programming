
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number
 * Return: last digit value
 */
int print_last_digit(int n)
{
  int b = n % 10;

		if (b < 0)
		  b = -b;

				_putchar(b + '0');

	return (b);
}
