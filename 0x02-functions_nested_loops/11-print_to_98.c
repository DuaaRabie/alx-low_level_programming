#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print integers from n to 98
 * @n: start integer
 * Return: void
*/
void print_to_98(int n)
{
	int start = n;
	int output;

	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			output = n;
			if (n != start)
			{
				printf(" ");
			}
			printf("%d", output);
			if (n != 98)
			{
				printf(",");
			}
		}
	}
	if (n == 98)
	{
		printf("%d", n);
	}
	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			output = n;
			if (n != start)
			{
				printf(" ");
			}
			printf("%d", output);
			if (n != 98)
			{
				printf(",");
			}
		}
	}
	printf("\n");
}
