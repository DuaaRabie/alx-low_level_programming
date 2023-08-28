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
 * *_strspn - gets the length of a prefix substring
 * @s: address to initial segment
 * @accept: address to the reference matching
 * Return: number of matched characters
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	unsigned int reflen = length(accept);
	unsigned int slen = length(s);
	unsigned int i, j;

	for (i = 0; i <= reflen; i++)
	{
		for (j = 0; j <= slen + 1; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				count++;
			}
		}
	}

	return (count);
}

