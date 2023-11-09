#include "lists.h"

/**
 * dlistint_len - count number of elements in doubly linked list
 * @h: header of doubly linked list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int count = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}

	return (count);
}
