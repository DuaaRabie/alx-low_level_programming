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
	unsigned int size1, size2, size;
	unsigned int i, j, k = 0;

	if (s1 == NULL)
		size1 = 0;
	else
		size1 = sizeof(s1);
	if (s2 == NULL)
		size2 = 0;
	else
		size2 = sizeof(s2);
	size = size1 + size2 - 1;
	ptr = malloc(size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size1 - 1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = size - size1 - 1; j < size; j++, k++)
	{
		ptr[j] = s2[k];
	}
	return (ptr);
}
