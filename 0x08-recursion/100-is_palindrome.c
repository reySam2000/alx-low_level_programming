#include "main.h"

/**
 * is_palindrome - returns 1 if s is a palindrome
 * @s: string to check
 *
 * Return: 1 if it's a palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int flag = 1;

	check(s, 0, _strlen_recursion(s) - 1, &flag);
	return (1);
}

/**
 * check - checks if string is palindrome
 * @s: string to check
 * @start: strarting index
 * @end: ending index
 * @flag: flag to show if string is a palindrome
 *
 * Return: void
 */

void check(char *s, int start, int end, int *flag)
{
	if (start <= end)
	{
		if (s[start] == s[end])
			*flag *= 1;
		else
			*flag*= 0;
		check(s, start + 1, end - 1, flag);
	}
}

/**
 * _strlen_recursion - calculates the length of a string
 * @s: string to be used
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}
