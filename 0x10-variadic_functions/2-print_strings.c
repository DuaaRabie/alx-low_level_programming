#include "variadic_functions.h"

/**
 * print_strings - print all variadic strings arguments
 * @separator: string to be printed between numbers
 * @n: number of strings to be printed
 * ...: variadic arguments
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	char *s;
	unsigned int i;


	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(str, char*);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
