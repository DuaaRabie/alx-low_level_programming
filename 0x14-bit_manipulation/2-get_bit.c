#include "main.h"
#include <stdlib.h>

/**
 * get_bit - get the value of a bit at a given index
 * @n: the number
 * @index: the index of bit
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int total = sizeof(unsigned long int) * 8;

	if (index > total)
		return (-1);

	return ((n >> index) & 1);

	/*
	while (n)
	{
		if (index == i)
			return ((n & 1));
		n = n >> 1;
		i++;
	}

	return (-1);*/
}
