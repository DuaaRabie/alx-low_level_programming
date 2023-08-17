#include <stdio.h>
#include "main.h"

/**
 * Length - return the length of the number
 *
 * @n: the number
 *
 * Return: the length
*/
int Length(int n)
{
	int length = 1;

	if (!n)
		return (1);
	while (n)
	{
		n = n / 10;
		length += 1;
	}
	return (length);
}


/**
 * main - entry point
 *
 * Return: 0
*/
int main(void)
{
	unsigned long f1 = 1, f2 = 2;
	unsigned long s1 = 0, s2 = 0;
	unsigned long sum1, sum2, value = 100000000;
	int i, seperator;

	for (i = 0; i < 99; i++)
	{
		if (s1 > 0)
		{
			printf("%lu", s1);
		}
		seperator = Length(value) - 1 - numLength(f1);
		while (s1 > 0 && seperator > 0)
		{
			printf("%d", 0);
			seperator--;
		}
		printf("%lu", f);
		sum1 = (f1 + f2) % value;
		sum2 = s1 + s2 + (f1 + f2) / value;
		f1 = f2;
		s1 = s2;
		f2 = sum1;
		s2 = sum2;

		if (i != 98)
		{
			printf(", ");
		}
		printf("\n");
	}
	return (0);
}
