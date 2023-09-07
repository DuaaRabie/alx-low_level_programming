#include "main.h"

/**
 * *_calloc - allocate memory for an array
 * @nmemb: number of elements
 * @size: size of each element
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;
	int *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
	       ptr[i] = 0;
	memory = (void *) ptr;

	return (memory);
}
