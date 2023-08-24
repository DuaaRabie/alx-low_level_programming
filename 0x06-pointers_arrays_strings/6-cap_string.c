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

	for (i = 1; str[i] != '\0'; i++)
	{
		for (j = 0; del[j] != '\0'; j++)
		{
			if (str[i] == del[j])
				if(str[i + 1] > 96 && str[i + 1] < 123)
					str[i + 1] -= 32;
		}
	}
	return (str);
}
