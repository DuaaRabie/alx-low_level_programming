#include "main.h"
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes form s2
 * Return: pointer to newly allocated space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int size1, size2, size;
	unsigned int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size1 = strlen(s1);
	size2 = strlen(s2);
	if (n >= size2)
		size = size1 + size2 + 1;
	else
		size = size1 + n + 1;

	ptr = malloc(size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (; j <= n; i++)
	{
		ptr[i] = s2[j];
		j++;
	}
	ptr[size - 1] = '\0';

	return (ptr);
}
