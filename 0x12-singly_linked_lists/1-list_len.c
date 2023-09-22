#include "lists.h"

/**
 * list_len - count the length of the list
 * @h: the head pointer
 * Return: the number of list elements
 */
size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	int count = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}

	return (count);
}
