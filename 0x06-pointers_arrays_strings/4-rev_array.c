#include "main.h"

/**
 * reverse_array -  reverse an array of integers
 * @a: address of array
 * @n: number of elements
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int x;

	for (i = n - 1; i >= n / 2; i--)
	{
		x = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = x;
	}
}
