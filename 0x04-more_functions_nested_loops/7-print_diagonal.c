#include "main.h"
/**
 * print_diagonal - draws a straight line
 * @n: number of \
 * Return: void
*/
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i != 0)
			{
				_putchar('\n');
				for (j = 1; j <= i; j++)
				{
					_putchar(32);
				}
			}
			_putchar(92);
		}
	}
	putchar('\n');
}
