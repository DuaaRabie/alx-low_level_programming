#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: address of a string
 * Return: nothing
 */
void print_rev(char *s)
{
	int count;
	int length = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		length += 1;
	}
	for (count = length - 1; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
