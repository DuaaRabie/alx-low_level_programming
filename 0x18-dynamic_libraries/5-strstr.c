#include "main.h"

/**
 * *_strstr - locate a substring
 * @haystack: address to the examied string
 * @needle: address to refrence substring
 * Return: pointer to the first match | NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int reflen = length(needle);
	unsigned int slen = (unsigned int)length(haystack);
	unsigned int i;
	unsigned int j = 0;
	char *result;

	if (*needle == '\0')
		return (haystack);

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

return (NULL);
}
