#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: the character
 * Return: a pointer to the array | NULL
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(size);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
