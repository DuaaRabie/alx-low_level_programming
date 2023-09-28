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
 * get_bit - get the value of a bit at a given index
 * @n: the number
 * @index: the index of bit
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;
	int total = digits(n);
	char *b = (char *)calloc(total, sizeof(char));

	if (n == 0)
		return (0);

	while (n)
	{
		b[i] = (n & 1);
		n = n >> 1;
		if (i == index)
			return (b[i]);
		i++;
	}

	return (-1);
}
