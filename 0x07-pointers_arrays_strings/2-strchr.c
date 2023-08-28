#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: address to string
 * @c: the character to be located
 * Return: pointer to first occurance to c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return ('\0');
}

