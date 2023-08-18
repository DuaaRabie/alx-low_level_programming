#include "main.h"

/**
 * main - check the code
 *
 * Return: 0
 */
void print_number(int n)
{
	int length = 1;
	int div;
	int mod;

	while (n)
	{
		n = n / 10;
		length += 1;
	}
	
	while (n)
	{
		while (length)
		{
			div = n / (10 * length);
			if (div == 0)
			{ 
				mod = n / (10 * length);
				_putchar(mod);
			}
			n--;
		}

	}
}
