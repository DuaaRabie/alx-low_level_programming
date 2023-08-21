#include "main.h"

/**
 * swap_int - swap values of two integers
 * @a: pointer of variable a
 * @b: pointer of variable b
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int n1 = *a;
	int n2 = *b;

	*a = n2;
	*b = n1;
}
