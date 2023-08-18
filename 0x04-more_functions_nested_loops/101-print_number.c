#include "main.h"

/**
 * print_number - check the code
 * @n: number
 * Return: 0
 */
void print_number(int n)
{
	int power = 1;
	int m = n;
	int ndiv = 0;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	while (n)
	{
		n = n / 10;
		power *= 10;
	}
	m = n;
	if (m != 0 && power != 0)
	{
		while (m)
		{
			while (power)
			{
				power /= 10;
				if (power != 0)
				{
					ndiv = (m / power);
					ndiv = ndiv + 48;
					_putchar(ndiv);
					m = (m % power);
				}
			}
		}
	}
	else
	{
		ndiv = ndiv + 48;
		_putchar(ndiv);
	}
}
