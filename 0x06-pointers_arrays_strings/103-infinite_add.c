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
	int i, j, sum, rest = 0, l = length(n1) + 1, ll = length(n2) + 1, k = l;
	char *p = n1, *pp = n2;

	if (l < ll)
	{
		l = ll;
		ll = k;
		p = n2;
		pp = n1;
	}
	if (l >= size_r)
		return (0);
	for (j = l - 1; j >= l - ll;)
	{
		for (i = ll - 1; i >= 0; i--, j--)
		{
			r[j] = pp[i];
		}
	}
	for (j = l - ll - 1; j >= 0; j--)
		r[j] = '0';
	r[l] = '\0';
	for (j = l - 1 ; j >= 0; j--)
	{
		sum = rest + p[j] + r[j];
		if (sum >= 106)
		{
			r[j] = sum - 58;
			rest = 1;
		}
		else
		{
			r[j] = sum - 48;
			rest = 0;
		}
	}
	if (rest == 1)
	{
		for (i = l; i >= 0; i--)
			r[i + 1] = r[i];
		r[0] = 49;
	}
	r[l + 1] = '\0';
	return (r);
}
