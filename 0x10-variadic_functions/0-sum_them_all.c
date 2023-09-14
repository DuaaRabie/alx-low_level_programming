#include "variadic_functions.h"

/**
 * sum_them_all - sum all parameters
 * @n: number of parameters
 * ...: variadic arguments
 * Return: the summation
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list par;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(par, n);
	for (i = 0; i < n; i++)
		sum += va_arg(par, int);

	va_end(par);

	return (sum);
}
