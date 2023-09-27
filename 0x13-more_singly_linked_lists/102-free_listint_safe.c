#include "lists.h"

/**
 * free_listint_safe - free list
 * @h: address to pointer of the first node
 * Return: the size of the list
 */
size_t free_listint_safe(listint_t **h)
{
	int count = 0, i = 1, j = 0;
	listint_t *temp = *h, *next, *array[200], *loop = NULL;

	if (h == NULL || *h == NULL)
		return (count);


	array[0] = *h;
	if (temp->next == temp)
		loop = temp;

	while (temp->next != loop)
	{
		j = 0;
		next = temp->next;
		free(temp);
		temp = next;
		array[i] = temp;
		array[i + 1] = NULL;
		while (array[j])
		{
			if (temp->next == array[j])
			{
				loop = array[j];
				break;
			}
			j++;

		}
		i++;
		count++;
	}

	*h = NULL;

	return (++count);
}
