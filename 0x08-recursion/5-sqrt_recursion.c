#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - a function that returns the natural square root
 * of a number
 * @n: numer to calculate square root
 *
 * Return: square root result
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural square root
 * of given number
 * @n: number to calculate square root
 * @i: iterator
 *
 * Return: square root result
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (1);
	return (actual_sqrt_recursion(n, i + 1));
}
