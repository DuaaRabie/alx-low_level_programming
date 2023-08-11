#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int numbs = 48;
	short newLine = '\n';
	int i = 0;

	while (i < 10)
	{
		putchar(numbs);
		i++;
		numbs++;
	}
	putchar(newLine);
	return (0);
}
