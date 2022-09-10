
#include <stdio.h>

/**
 * main-print alphabets in lower and uppercase
 *
 * Return: 0 if it's a success
 */
int main(void)
{
	int ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		putchar(ch);
	for (ch = 'A' ; ch <= 'Z' ; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
