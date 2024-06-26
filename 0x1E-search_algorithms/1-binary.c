#include <stdio.h>
#include <stddef.h>

/**
 * print_array - prints the array elemnts
 * @array: array pointer
 * @size: size of array
 * Return: nothing
 */
void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
		printf("%d%s", array[i], (i == size - 1) ? "\n" : ", ");
}

/**
 * binary_search - searches for a value in an array of
 *                 integers using the Binary search algorithm
 * @array: array of elements
 * @size: number of array elements
 * @value: value to search for
 * Return: the index of the value || -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, low = 0, high = size - 1;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		mid = low + (high - low) / 2;

		print_array(array + low, high - low + 1);
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			high =  mid - 1;
	}

	return (-1);
}
