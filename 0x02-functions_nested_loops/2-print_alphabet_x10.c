#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet in lowercase
 * 10 times followed by new line
 * Return: void
*/
void print_alphabet_x10(void)
{
	int j = 0;
	int alphabet;

	while (j < 10)
	{
		alphabet = 97;
		while (alphabet < 123)
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		j++;
	}
}
