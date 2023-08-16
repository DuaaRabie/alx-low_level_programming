#include <stdio.h>
#include "main.h"
/**
 * print_times_table - prints the n times table
 *
 * Return: void
*/
void print_times_table(int n)
{
	int i;
	int j;
	int k;

	if (!(n > 15 || n < 0 ))
	{
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = j * i;
				if (k > 99)
				{
					_putchar(' ');
					_putchar((k / 100) + '0');
					_putchar(((k % 100) / 10) + '0');
					_putchar((k % 10) + '0');
				}
				else if (k > 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				}
				else
				{
					if (!(j == 0))
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
						_putchar(k + '0');
					}
					else
					{
						_putchar(k + '0');
					}
				}
				if (j != n)
				{
					_putchar(',');
				}
			}
			_putchar('\n');
		}
		
	}
}
