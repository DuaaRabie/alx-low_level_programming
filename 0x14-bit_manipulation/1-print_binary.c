#include "main.h"
#include <stdlib.h>

/**
 * digits - calculate the total binary digits
 * @n: the number
 * Return: total number of digits
 */
int digits(unsigned long int n)
{
	unsigned long int power = 1, highest = 1;
	int digit = 1;

	while (n > highest)
	{
		digit++;
		power *= 2;
		highest += power;
	}

	return (digit);
}

/**
 * print_binary - prints binary representative for an integer
 * @n: the number
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int i = 0;
	int total = digits(n);
	char *b = (char *)calloc(total, sizeof(char));

	if (n == 0)
		putchar('0');

	while (n)
	{
		b[i] = (n & 1) + '0';
		i++;
		n = n >> 1;
	}

	i--;

	while (i >= 0)
	{
		putchar(b[i]);
		i--;
	}
}
