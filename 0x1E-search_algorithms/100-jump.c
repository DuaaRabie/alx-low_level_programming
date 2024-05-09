#include <stdio.h>
#include <math.h>

/**
 * jump_search -  searches for a value in a sorted array of integers
 *		  using the Jump search algorithm
 * @array: array of elements
 * @size: size of the array
 * @value: value to be searched
 * Return: index of the value || -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, i;
	size_t low = 0, high;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	high = step;
	if (array[low] > value)
		return (-1);

	while ((low <= size - 1))
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
		if (value <= array[high] || ((low == size - 1) && (value >= array[low])))
		{
			printf("Value found between indexes [%ld] and [%ld]\n", low, high);
			for (i = low; i <= high; i++)
			{
				printf("Value checked array[%ld] = [%d]\n",
						i, array[i]);
				if (array[i] == value)
					return (i);
				if ((low == size - 1) && (value > array[low]))
					return (-1);
			}
		}
		else
		{
			low += step;
			high += step;
		}

	}

	return (-1);
}
