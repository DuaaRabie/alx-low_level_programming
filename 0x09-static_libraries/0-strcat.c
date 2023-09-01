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
 * *_strcat - concatenates two strings
 * @dest: pointer to first string
 * @src: ponter to second string
 * Return: pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int total_length;
	int l1, l2;
	int i;
	int j = 0;

	l1 = length(dest);
	l2 = length(src);
	total_length = l1 + l2;
	for (i = l1; i < total_length; i++)
	{
		dest[i] = src[j];
		j++;
	}
	return (dest);
}
