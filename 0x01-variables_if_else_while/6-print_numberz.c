#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	unsigned char numbs[] = "0123456789";
	short newLine = '\n';
	int i = 0;

	while (i < 10)
	{
		putchar(numbs[i]);
		i++;
	}
	putchar(newLine);
	return (0);
}
