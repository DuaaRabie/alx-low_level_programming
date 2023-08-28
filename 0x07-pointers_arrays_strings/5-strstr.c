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
 * *_strstr - locate a substring
 * @haystack: address to the examied string
 * @needle: address to refrence substring
 * Return: pointer to the first match | NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int reflen = length(needle);
	unsigned int slen = length(haystack);
	unsigned int i;
	unsigned int j = 0;
	char *result;

	for (i = 0; i < slen && j < reflen; i++)
	{
		if (*(haystack + i) == *(needle + j))
		{
			if (j == 0)
				result = (haystack + i);
			j++;
			if (j == reflen)
				return (result);
		}
		else if (j != 0)
		{
			i -= j;
			j = 0;
		}
	}

return ('\0');
}
