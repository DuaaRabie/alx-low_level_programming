#include "main.h"

/**
 * puts2 - prints every other character
 * @str: address of a string
 * Return: nothing
 */
void puts2(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
	{
		if (count == 0)
		{
			_putchar(str[count]);
		}
	}
	_putchar('\n');
}
