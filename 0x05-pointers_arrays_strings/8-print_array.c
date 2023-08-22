#include "main.h"

/**
 * print_array - prints n element of an array of integers
 * @a: address of a string
 * @n: number of elements to print
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		printf("%d", a[count]);
		if (count != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
