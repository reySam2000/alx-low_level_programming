#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	char zed;
	int x, del, del1;

	del = 0;
	del1 = 0;

	while (s[del] != '\0')
	{
		del++;
	}

	del1 = del - 1;

	for (x = 0 ; x < del / 2 ; x++)
	{
		zed = s[x];
		s[x] = s[del1];
		s[del1--] = zed;
	}
}
