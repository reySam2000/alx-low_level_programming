#include <stdio.h>

/**
 * main - print all possible different combination of three digits
 *
 * Return: 0 if it's a success
 */
int main(void)
{
	int x, y, z;

	for (x = 48 ; x <= 55 ; x++)
	{
		for (y = 49 ; y <= 56 ; y++)
		{
			for (z = 50 ; z <= 57 ; z++)
			{
				if (z > y && y > x)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (x != 55 || y != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
