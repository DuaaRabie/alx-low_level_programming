#include "lists.h"

/**
 * listint_len - count number of elements
 * @h: the head pointer
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	int count = 0;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	return (count);
}
