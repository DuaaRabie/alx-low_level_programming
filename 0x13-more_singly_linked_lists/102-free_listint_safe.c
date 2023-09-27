#include "lists.h"

/**
 * free_listint_safe - free list
 * @h: address to pointer of the first node
 * Return: the size of the list
 */
size_t free_listint_safe(listint_t **h)
{
	int count = 0, i = 0, j = 0 ;
	listint_t *temp = *h, *next, *array[200], *loop = NULL;

	if (h == NULL || *h == NULL)
		return (count);


	while (temp != loop)
	{
		j = 0;
		array[i] = temp;
		array[i + 1] = NULL;
		while (array[j])
		{
			if (temp->next == array[j])
			{
				loop = array [j];
				break;
			}
			j++;

		}
		i++;
		next = temp->next;
		free(temp);
		count++;
		temp = next;
	}

	*h = NULL;

	return (++count);
}
