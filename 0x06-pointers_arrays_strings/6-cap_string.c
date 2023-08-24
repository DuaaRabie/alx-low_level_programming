#include "main.h"

/**
 * *cap_string - change all characters to uppercase
 * @str: address of string
 * Return: pointer to capitalized string
 */
char *cap_string(char *str)
{
	int i, j;
	char del[] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] > 96 && str[i] < 123)
		{
			for (j = 0; del[j] != '\0'; j++)
			{
				if (str[i - 1] == del[j])
					str[i] -= 32;
			}
		}
	}
	return (str);
}
