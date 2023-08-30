 #include "main.h"

/**
 * factorial - compute the factorial of a given integer
 * @n: the integer
 * Return: if n >= 0 return factorial
 *         if n < 0 return -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
