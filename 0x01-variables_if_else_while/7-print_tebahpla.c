
#include <stdio.h>

/**
 * main-print lowercase alphabet in reverse
 *
 * Return: 0 if it's a success
 */
int main(void)
{
	char ch;

	for (ch = 'z' ; ch >= 'a' ; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
