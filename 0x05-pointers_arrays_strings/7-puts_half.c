#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: address of a string
 * Return: nothing
 */
void puts_half(char *str)
{
	int count;
	int length = 0;

	for (count = 0; str[count] != '\0'; count++)
	{
		length += 1;
	}
/*	if (length % 2 == 0)
	{*/
		for (count = length / 2; str[count] != '\0'; count++)
		
			_putchar(str[count]);
	/*	}
	}
	else
	{
		for (count = ((length - 1) / 2); str[count] != '\0'; count++)
		{
			_putchar(str[count + 1]);
		}
	}*/
	_putchar('\n');
}
