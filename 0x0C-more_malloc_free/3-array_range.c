#include "main.h"

/**
 * *array_range - allocate memory for an array of integers
 * @min: minmum value
 * @max: maximum
 * Return: a pointer to the allocated memory
 */
int *array_range(int min, int max)
{
	int *ptr;
	int total_size = max - min + 1;
	int i, num = min;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * total_size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < total_size; i++, num++)
	{
		ptr[i] = num;
	}

	return (ptr);
}
