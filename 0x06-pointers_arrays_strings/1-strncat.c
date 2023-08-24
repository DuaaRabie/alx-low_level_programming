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
 * *_strncat - concatenates two strings with n bytes
 * @dest: pointer to first string
 * @src: ponter to second string
 * @n: number of bytes from second string
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int total_length;
	int l1, l2;
	int i;
	int j = 0, k = 0;

	l1 = length(dest);
	l2 = length(src);
	total_length = l1 + n;

	if (n < l2)
	{
		for (i = l1; i < total_length; i++)
		{
			dest[i] = src[j];
			j++;
		}
	}

	if (n > l2)
	{
		for (i = l1; i < (l1 + l2); i++)
		{
			dest[i] = src[k];
			k++;
		}
	}
	dest[total_length] = '\0';
	return (dest);
}
