#include "main.h"

/**
 * print_diagsums - print the two diagonals sums of a square matrix
 * @a: address to the matrix
 * @size: size of matrix
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int d1 = 0, d2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				d1 += +(*(a + (i * size + j)));
			}
			if (i == size - j - 1)
			{
				d2 += +(*(a + (i * size + j)));
			}
		}
	}
	printf("%d, %d\n", d1, d2);
}
