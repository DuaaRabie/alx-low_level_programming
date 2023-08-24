#include "main.h"

/**
 * length - length of string
 * @str: address of string
 * Return: the length of string
 */
int length(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		count += 1;
	}
	return (count);
}


/**
 * *infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: the buffer will store the resul
 * @size_r: size of the buffer
 * Return: 0 if result can't be stored in r
 *       : r if result can be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	int sum;
	int rest = 0;
	int l1 = length(n1);
	int z1 = sizeof(n1);

	for (i = l1 - 1; i >= 0; i--)
	{
		sum = rest + n1[i] + n2[i];
		if (sum >= 106)
		{
			r[i] = sum - 58;
			rest = 1;
		}
		else
		{
			r[i] = sum - 48;
			rest = 0;
		}

	}
	if (z1 >= size_r)
	{
		return (0);
	}

	return (r);
}
