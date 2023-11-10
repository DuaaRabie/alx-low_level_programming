#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node in a given position
 * @head: address of the first pointer
 * @index: position of node
 * Return: 1 success | -1 fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp1 = *head;
	dlistint_t *temp2;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);


	if (index == 0)
	{
		*head = temp1->next;
		if (temp1->next != NULL)
			temp1->next->prev = NULL;
		free(temp1);
		return (1);
	}

	while (i < index - 1 && temp1 != NULL)
	{
		temp1 = temp1->next;
		i++;
	}

	if (temp1 == NULL || temp1->next == NULL)
		return (-1);
	temp2 = temp1->next;
	temp1->next = temp2->next;
	if (temp2->next != NULL)
		temp2->next->prev = temp1;
	free(temp2);


	return (1);
}
