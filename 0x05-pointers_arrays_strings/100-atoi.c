#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: converted integer
 */

int _atoi(char *s)
{
	int x, p, m, del, t, digit;

	x = 0;
	p = 0;
	m = 0;
	del = 0;
	t = 0;
	digit = 0;

	while (s[del] != '\0')
		del++;

	while (x < del && t == 0)
	{
		if (s[x] == '-')
			++p;

		if (s[x] >= '0' && s[x] <= '9')
		{
			digit = s[x] - '0';
			if (p % 2)
				digit = -digit;
			m = m * 10 + digit;
			t = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			t = 0;
		}
		x++;
	}

	if (t == 0)
		return (0);

	return (m);
}
