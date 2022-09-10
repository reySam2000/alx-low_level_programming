
#include <stdio.h>

/**
 * main-print single digit numbers of base 10
 * using putchar
 * Return: 0 if it's a success
 */
int main(void)
{
	int n;

	for (n = 48 ;n < 57 ; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
