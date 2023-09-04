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
	unsigned int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size1 = sizeof(s1) - 1;
	size2 = sizeof(s2) - 1;
	size = size1 + size2 - 2;
	ptr = malloc(size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (; s2[j] != '\0'; i++)
	{
		ptr[i] = s2[j];
		j++;
	}
	ptr[size - 1] = '\0';

	return (ptr);
}
