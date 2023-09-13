#include "function_pointers.h"

/**
 * array_iterator - excute a given function in all elements of given array
 * @array: address of the array
 * @size: size of the array
 * @action: pointer to the function to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL && size != 0)
		for (i = 0; i < size; i++)
			action(array[i]);
}
