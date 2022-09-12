#include <stdio.h>

/**
 *main - prints all possible combos of two two digits numbers
 *
 *Return: 0 if it's a success
 */
int main(void)
{
  int a, b;

  for (a = 0 ; b <= 99 ; a++)
    {
      for (b = 0 ; b <= 99 ; b++)
	{
	  if (b > a)
	    {
	      putchar((a / 10) + 48);
	      putchar((a % 10) + 48);
	      putchar(' ');
	      putchar((b / 10) + 48);
	      putchar((b % 10) + 48);
	      if (a != 98 || b != 99)
		{
		  putchar(',');
		  putchar(' ');
		}
	    }
	}
    }
  putchar('\n');
  return (0);
}
