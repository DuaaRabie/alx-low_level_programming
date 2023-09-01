#include "main.h"

/**
 * length - compute the length of string
 * @str: address to string
 * Return: the length
 */
unsigned int length(char *str)
{
	unsigned int len = 0;

	while (*str++ != '\0')
	{
		len++;
	}
	return (len);
}


/**
 * *_strpbrk - search a string for any of a set of bytes
 * @s: address of string
 * @accept: add of reference
 * Return: pointer to the first match
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int reflen = length(accept);
	unsigned int slen = length(s);
	unsigned int i, j;

	for (i = 0; i < slen; i++)
	{
		for (j = 0; j < reflen; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}

	}

	return ('\0');
}

