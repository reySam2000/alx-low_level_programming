#include "main.h"

/**
 * *cap_string - capitalize words in a string
 * word separators are:space, tabulation, newline
 * ,, ;, ., !, ?, ", (, ), {, and }
 * @s: string pointer
 *
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	int bount;

	/* scan through string */
	bount = 0;
	while (s[bount] != '\0')
	{
		/* if character after bount is char, capitalize it */
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		if (s[bount] == ' ' || s[bount] == '\t' || s[bount] == '\n'
				|| s[bount] == ',' || s[bount] == ';' || s[bount] == '.'
				|| s[bount] == '.' || s[bount] == '!' || s[bount] == '?'
				|| s[bount] == '"' || s[bount] == '(' || s[bount] == ')'
				|| s[bount] == '{' || s[bount] == '}')
		{
			if (s[bount + 1] >= 97 && s[bount + 1] <= 122)
			{
				s[bount + 1] = s[bount + 1] - 32;
			}
		}
		bount++;
	}
	return (s);
}
