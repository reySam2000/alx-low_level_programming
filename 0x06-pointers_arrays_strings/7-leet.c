#include "main.h"

/**
 * *leet - encodes a string to 1337
 * @s: string to be encoded
 *
 * Return: the result
 */
char *leet(char *s)
{
	int wap, kink;

	char *lett = "aAeEoOtTlL";
	char *numb = "4433007711";

	for (wap = 0 ; s[wap] != '\0' ; wap++)
	{
		for (kink = 0 ; kink < 10 ; kink++)
		{
			if (s[wap] == lett[kink])
			{
				s[wap] = numb[kink];
			}
		}
	}

	return (s);
}
