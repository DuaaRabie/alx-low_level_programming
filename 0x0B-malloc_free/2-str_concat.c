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
	unsigned int size1 = sizeof(s1), size2 = sizeof(s2), i, j = 0;

	ptr = malloc(size1 + size2 - 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size1 - 1; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = size1 - 1; i < (size1 + size2 - 1) && j < size2; i++)
	{
		ptr[i] = s2[j];
		j++;
	}

	return (NULL);
}
