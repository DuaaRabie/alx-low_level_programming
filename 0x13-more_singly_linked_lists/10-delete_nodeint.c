#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node in a given position
 * @head: address of the first pointer
 * @idx: position of node
 * Return: 1 success | -1 fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	listint_t *temp1;
	listint_t *temp2;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	temp1 = *head;
	temp2 = temp1->next;

	if (idx == 0)
	{
		*head = temp2;
		free(temp1);
		return (1);
	}

	for (i = 0; i < idx - 1 && temp1 != NULL; i++)
	{
		temp1 = temp1->next;
		temp2 = temp1->next;
	}
	if (temp1 == NULL || temp2 == NULL)
		return (-1);
	temp1->next = temp2->next;
	free(temp2);

	return (1);
}
