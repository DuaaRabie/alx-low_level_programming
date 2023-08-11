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
	int semi = 44;
	int space = 32;

	while (i < 10)
	{
		putchar(numbs);
		if (i < 9)
		{
			putchar(semi);
			putchar(space);
		}
		i++;
		numbs++;
	}
	putchar(newLine);
	return (0);
}
