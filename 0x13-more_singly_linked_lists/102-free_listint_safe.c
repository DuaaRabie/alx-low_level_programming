#include "lists.h"

/**
 * free_listint_safe - free list
 * @h: address to pointer of the first node
 * Return: the size of the list
 */
size_t free_listint_safe(listint_t **h)
{
	int count = 0;
	listint_t *temp = *h;

	if (h == NULL || *h)
		return (count);

	do
	{
		free(temp);
		count++;
		temp = temp->next;
	} while (temp != *h);

	*h = NULL;

	return (++count);
}
