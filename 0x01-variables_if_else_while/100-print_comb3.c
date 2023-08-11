#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int semi = 44;
	int space = 32;
	short newLine = '\n';
	int i;
	int j;

	for (i = 48; i <= 56; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			if (i != j && j > i)
			{
				putchar(i);
				putchar(j);
				if (i != 56)
				{
					putchar(semi);
					putchar(space);
				}
			}
		}
	}
	putchar(newLine);
	return (0);
}
