#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: address to string
 * @c: the character to be located
 * Return: pointer to first occurance to c
 */
char *_strchr(char *s, char c)
{
	int length = 1;
	int i = 0;

	while (*(s + i) != '\0')
	{
		length++;
		i++;
	}

	for (i = 0; i < length; i++, s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}

	return ('\0');
}

