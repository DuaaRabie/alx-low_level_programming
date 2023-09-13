#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: address of the array to be searched
 * @size: the number of elements in the array
 * @cmp: pointer to the function used to compare values
 * Return: index of the integer otherwise -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, value;

	if (array != NULL && cmp != NULL && size != 0)
	{
		for (i = 0; i < size; i++)
		{
			value = cmp(array[i]);
			if (value == 1)
				return (i);
		}
	}
	return (-1);
}
