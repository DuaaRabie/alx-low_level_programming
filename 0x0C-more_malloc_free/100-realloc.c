#include "main.h"

/**
 * *_realloc - reallocate memory block
 * @ptr: first address of memory block
 * @old_size: old size for memory block
 * @new_size: the new size for memory block
 * Return: void pointer to the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;

	if (new_size == old_size)
		return (ptr);
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (ptr == NULL)
	{
		new = malloc(new_size);
		if (new == NULL)
			return (NULL);
	}

	new = ptr;
	new = malloc(new_size);

	free(ptr);

	return (new);
}
