#include "main.h"

/**
 * *string_toupper - change all characters to uppercase
 * @str: address of string
 * Return: pointer to uppercase string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] > 97 && str[i] < 123)
			str[i] -= 32;
	}
	return (str);
}
