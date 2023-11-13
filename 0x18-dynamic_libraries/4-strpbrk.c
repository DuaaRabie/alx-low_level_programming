#include "main.h"

/**
 * *_strpbrk - search a string for any of a set of bytes
 * @s: address of string
 * @accept: add of reference
 * Return: pointer to the first match
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int reflen = length(accept);
	unsigned int slen = (unsigned int) length(s);
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

