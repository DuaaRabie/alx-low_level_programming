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
	char newLine = '\n';
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
				for (j = 49; j <= 57; j++)
				{
				
							putchar(l);
							putchar(k);
							putchar(space);
							putchar(i);
							putchar(j);
							if (!( k == 56 && l == 57 && i == 57 && j == 57))
							{
								putchar(semi);
							}
					}
				}
			}
		}

	
	putchar(newLine);
	return (0);
}
