#include "main.h"

/**
 * _strdup - copy a given sring into a new location
 * @str: string to be copied
 * Return: a pointer to the copy
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int size = sizeof(char), i;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		size += sizeof(char);
	}

	ptr = malloc(size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size ; i++)
	{
		ptr[i] = str[i];
	}

	return (ptr);
}
