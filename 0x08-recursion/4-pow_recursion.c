 #include "main.h"

/**
 * _pow_recursion - compute x ^ y
 * @x: the base
 * @y: the power
 * Return: x ^ y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y != 0)
	{
		y--;
		return (x * _pow_recursion(x, y));
	}
	return (1);
}
