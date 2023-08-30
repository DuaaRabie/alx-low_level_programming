 #include "main.h"

/**
 * square_root - compute if sq is the square of the num
 * @sq: tested number
 * @num: the number needs the square root of
 * Return: square root
 */
int square_root(int num, int sq)
{
	if (sq * sq == num)
		return (sq);
	else if (sq * sq < num)
		return (square_root(num, ++sq));
	return (-1);
}

/**
 * _sqrt_recursion - compute the natural square root of a number
 * @n: the number
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (square_root(n, 1));
}
