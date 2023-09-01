#include "main.h"

/**
 * _puts - prints a string
 * @str: address of a string
 * Return: nothing
 */
void _puts(char *s)
{
	int count;

	for (count = 0; s[count] > 0; count++)
	{
		{
			_putchar(s[count]);
		}
	}
	_putchar('\n');
}
