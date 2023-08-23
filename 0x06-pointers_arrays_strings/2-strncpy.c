#include "main.h"

/**
 * length - count the string length
 * @str: pointer to string
 * Return: the length
 */
int length(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		count += 1;
	}
	return (count);
}


/**
 * *_strncpy - copies a string
 * @dest: the copy address
 * @src: pointer to constnt string
 * @n: number of bytes from second string
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int l1;
	int i;

	l1 = length(src);
	if (l1 >= n)
	{
		for (i = 0; i < n ; i++)
		{
			dest[i] = src[i];
		}
	}
	else if (l1 < n)
	{
		for (i = 0; i < l1; i++)
		{
			dest[i] = src[i];
		}
		for (i = l1 - 1; i < n; i++)
		{
			dest[i] = '\0';
		}
	}
	return (dest);
}
