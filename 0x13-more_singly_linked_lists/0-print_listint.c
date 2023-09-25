#include "lists.h"

/**
 * print_listint - print all list elements
 * @h: the head pointer
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	int count = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}

	return (count);
}
