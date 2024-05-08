#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - searches for a value in an array of
 *		   integers using the Linear search algorithm
 * @array: array of elements
 * @size: number of array elements
 * @value: value to search for
 * Return: the index of the value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (value);
	}

	return (-1);
}
