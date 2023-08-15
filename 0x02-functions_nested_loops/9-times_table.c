#include <stdio.h>
#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Return 0
*/
void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 9; j++)
		{ 
			k = j * i;
			if (!(i != 0 || j != 0))
			{
				if (k > 9)
				{
					_putchar(' ');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				}
			}
			else
			{
				_putchar(k + '0');
			}
			if (j != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
