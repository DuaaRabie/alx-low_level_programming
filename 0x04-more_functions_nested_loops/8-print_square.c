#include "main.h"
/**
 * print_square - prints squares
 * @size: size of square
 * Return: void
*/
void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
