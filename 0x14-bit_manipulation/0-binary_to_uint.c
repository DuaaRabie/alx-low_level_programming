#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: string of binary number
 * Return: unsigned integer number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0, power = 1;

	while (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] == '1' || b[i] == '0')
			i++;
		else
			return (0);
	}
	i--;

	while (i >= 0)
	{
		num += power * (b[i] - '0');
		i--;
		power *= 2;
	}

	return (num);
}
