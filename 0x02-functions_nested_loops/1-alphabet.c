#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints alphabet in lowercase followed by new line
 * Return: void
*/
void print_alphabet(void)
{
	int i;
	int alphabet = 97;

	for (i = 1; i <= 26; i++)
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
