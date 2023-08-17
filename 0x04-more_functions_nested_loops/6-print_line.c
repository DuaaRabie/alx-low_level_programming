#include "main.h"
/**
 * print_line - draws a straight line
 * @n: number of _
 * Return: void
*/
void print_line(int n)
{
	int i;
	
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
	else
	{
		putchar('\n');
	}
}
