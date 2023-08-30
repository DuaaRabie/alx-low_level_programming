 #include "main.h"

/**
 * _sqrt_recursion - compute the natural square root of a number
 * @n: the number
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	int sq = n / 2;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	while (sq)
	{
		if (sq * sq == n)
			return (sq);
		sq--;
	}
	return (-1);
}
