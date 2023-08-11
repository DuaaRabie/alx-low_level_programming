#include <stdio.h>

/**
 ** main - Entry point
 **
 ** Return: Always 0 (Success)
 **/
int main(void)
{
	char c = 'z';
	char newLine = '\n';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar(newLine);
	return (0);
}
