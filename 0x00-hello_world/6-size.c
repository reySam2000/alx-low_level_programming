
#include <stdio.h>

/**
 * main-print various type of sizes
 * Return: 0 if exited properly
 */
int main(void)
{
	printf("size of a char: %d byte(s)\n", sizeof(char));
	printf("size of an int: %d byte(s)\n", sizeof(int));
	printf("size of a longint: %d byte(s)\n", sizeof(longint));
	printf("size of a longlongint: %d byte(s)\n", sizeof(longlongint));
	printf("size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}

