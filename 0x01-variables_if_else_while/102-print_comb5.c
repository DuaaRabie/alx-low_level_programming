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
	int l;
	int k;

	for (l = 0; l <= 99; l++)
	{
		k = l;
		for (; k <= 99; k++)
		{
			if (l != k)
			{
				putchar((l / 10) + 48);
				putchar((l % 10) + 48);
				putchar(space);
				putchar((k / 10) + 48);
				putchar((k % 10) + 48);
				if (!(l == 98 && k == 99))
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
