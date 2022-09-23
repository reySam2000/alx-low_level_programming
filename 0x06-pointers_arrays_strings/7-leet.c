#include "main.h"

/**
 * *leet - encodes a string to 1337
 * @s: pointer to string
 *
 * Return: pointer to s
 */
char *leet(char *s)
{
	int wap, kink;
	char letters[] = "aAeEoOtTlL";
	char numb[] = "4433007711";

	/* scan string */
	wap = 0;
	while (s[wap] != '\0')
		/* check if letters is found */
	{
		kink = 0;
		while (kink < 10)
		{
			if (letters[kink] == s[wap])
			{
				s[wap] = numb[kink];
			}
			kink++
		}
		wap++
	}
	return (s);
}
