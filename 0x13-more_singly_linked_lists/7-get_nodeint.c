#include "lists.h"

/**
 * get_nodeint_at_index - finds the nth index node
 * @head: the head pointer
 * @index: index to find the node with
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (i < index)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
		i++;
	}


	return (temp);
}
