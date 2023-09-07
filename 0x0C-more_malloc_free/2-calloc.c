#include "main.h"

/**
 * *_calloc - allocate memory for an array
 * @nmemb: number of elements
 * @size: size of each element
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = (int *)malloc(sizeof(int *));
	if (ptr == NULL)
		return (NULL);	
	return (ptr);
}
