#include <stdio.h>

/**
 * main -finds and prints the largest prime factor of the 612852475143
 * followed by a new line
 * Return: 0 if it's a success
 */

int main(void)
{
	long number = 612852475143;
	int inc;

	while (inc++ < number / 2)
	{
		if (number % inc == 0)
		{
			number /= 2;
			continue;
		}

		for (inc = 3 ; inc < number / 2 ; inc += 2)
		{
			if (number % inc == 0)

				number /= inc ;
		}
	}
	printf("%ld\n", number);
	return (0);
}
