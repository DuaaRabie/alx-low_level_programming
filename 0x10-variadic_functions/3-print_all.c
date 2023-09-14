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
	unsigned int j = 0;
	char *s;

	va_start(var, format);

	while (format && format[j])
	{
		switch (format[j++])
		{
			case 'c':
				printf("%c", va_arg(var, int));
				break;
			case 'i':
				printf("%d", va_arg(var, int));
				break;
			case 'f':
				printf("%f", va_arg(var, double));
				break;
			case 's':
				s = va_arg(var, char*);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				continue;
		}
		if (format[j] != '\0')
			printf(", ");
	}
	printf("\n");
	va_end(var);
}
