#include "variadic_functions.h"

/**
 * print_numbers - print all arguments
 * @separator: string to be printed between numbers
 * @n: number of integers to be printed
 * ...: variadic arguments
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	if (separator != NULL)
	{
		va_start(num, n);
		for (i = 0; i < n; i++)
		{
			printf("%d%s", va_arg(num, int), i == n - 1 ? "\n" : separator);
		}
	}
	va_end(num);
}
