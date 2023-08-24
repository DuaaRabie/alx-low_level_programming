#include "main.h"

/**
 * *leet - encode to 1337
 * @str: address of string
 * Return: pointer to the encoded string
 */
char *leet(char *str)
{
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			if (str[i] == s1[j])
			{
				str[i] = s2[j];
			}
		}
	}
	return (str);
}
