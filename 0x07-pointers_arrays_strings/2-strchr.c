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
	int i;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	for (i = 0; i < length; i++)
	{
		if (*(s + i) == c)
		{
			return (s);
		}
	}

	return ('\0');
}

