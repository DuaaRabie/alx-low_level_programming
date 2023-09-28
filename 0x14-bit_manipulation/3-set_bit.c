#include "main.h"

/**
 * set_bit - set the value of a bit at a given index to 1
 * @n: the number
 * @index: the index of bit
 * Return: 1 if worked otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int check = 1;

	check = (check << index);

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n = (*n | check);

	return (1);
}
