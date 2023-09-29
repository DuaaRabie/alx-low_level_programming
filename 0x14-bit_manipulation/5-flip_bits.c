#include "main.h"

/**
 * flip_bits - check number of bits to filp between two numbers
 * @n: the first number
 * @m: the second number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int total = (sizeof(unsigned long int) * 8);
	unsigned int flips = 0;

	while (total--)
	{
		if ((m & 1) != (n & 1))
		{
			flips++;
		}
		m = (m >> 1);
		n = (n >> 1);
	}

	return (flips);
}
