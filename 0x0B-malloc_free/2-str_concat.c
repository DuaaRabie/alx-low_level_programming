#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to new allocated space
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int size1 = sizeof(s1), size2 = sizeof(s2), size = size1 + size2 - 1;
	unsigned int i, j = 0;

	ptr = malloc(size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size1 - 1; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = size1 - 1; i < size; i++, j++)
	{
		ptr[i] = s2[j];
	}

	return (ptr);
}
