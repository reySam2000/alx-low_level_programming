
#include <stdio.h>

/**
 * main-prints lowercase alphabet
 *
 * Return: 0 if it's a success
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
