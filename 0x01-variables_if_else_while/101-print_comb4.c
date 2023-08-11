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
	int k;

	for (i = 48; i <= 55; i++)
	{
		for (j = 49; j <= 56; j++)
		{
			for (k = 50; k <= 57; k++)
			{
				if (i != j && j != k && i != k  && k > j && j > i)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != 55)
					{
						putchar(semi);
						putchar(space);
					}
				}
			}
		}
	}
	putchar(newLine);
	return (0);
}
