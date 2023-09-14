#include "variadic_functions.h"

/**
 * print_all - prints all types of variadic arguments
 * @format: the list of arguments types
 * ...: variadic arguments
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list var;
	unsigned int argn = 0, j = 0;
	int i = 0;
	char *s;

	if (format != NULL)
	{
		while (format[i] != '\0')
		{
			argn += 1;
			i++;
		}
		va_start(var, format);
		while (j < argn)
		{
			switch (format[j])
			{
				case 'c':
					printf("%c%s", va_arg(var, int), j == argn - 1 ? "\n" : ", ");
					break;
				case 'i':
					printf("%d%s", va_arg(var, int), j == argn - 1 ? "\n" : ", ");
					break;
				case 'f':
					printf("%f%s", va_arg(var, double), j == argn - 1 ? "\n" : ", ");
					break;
				case 's':
					s = va_arg(var, char*);
					if (s == NULL)
						s = "(nil)";
					printf("%s%s", s, j == argn - 1 ? "\n" : ", ");
					break;
				default:
					if (j == argn - 1)
						printf("\n");
					break;
			}
			j++;
		}
	}
	va_end(var);
}
