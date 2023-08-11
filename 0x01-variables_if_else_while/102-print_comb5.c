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
	int l;

	for (l = 48; l <= 57; l++)
	{
		for (k = 48; k <= 56; k++)
		{
			/*putchar(l);
			putchar(k);
			putchar(space);*/
			for (i = 48; i <= 57; i++)
			{
				for (j = 48; j <= 57; j++)
				{
					if (!( l == 48 && k == 48 && i == 48 && i == 48))
					{
				
							putchar(l);
							putchar(k);
							putchar(space);
							putchar(i);
							putchar(j);
							if (!( k == 56 && l == 57 && i == 57 && j == 57))
							{
								putchar(semi);
								putchar(space);
							}
				
				}
			}
		}
	}
	}
	putchar(newLine);
	return (0);
}
