#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int hex = 48;
	char a = 'a';
	int i = 0;
	char newLine = '\n';

	while (i < 17)
	{
		if (hex < 58)
		{
			putchar(hex);
			hex++;
		}
		else if (a <= 'f')
		{
			putchar(a);
			a++;
		}
		i++;
	}
	putchar(newLine);
	return (0);
}
