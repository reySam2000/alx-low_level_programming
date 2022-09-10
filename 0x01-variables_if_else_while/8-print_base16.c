
#include <stdio.h>

/**
 * main-prints all base16 numbers
 * in lowercase
 * Return: 0 if it's a success
 */
int main(void)
{
	int n;
	char ch;

	for (n = 48 ; n < 58 ; n++)
	{
		putchar(n);
	}
	for (ch = 'a' ; ch <= 'f' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
