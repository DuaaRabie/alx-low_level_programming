#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node in a given position
 * @head: address of the first pointer
 * @idx: position of new node
 * @n: value of new node
 * Return: address of new node | NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head, *new;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		*head = new;
		if (temp == NULL)
			new->next = NULL;
		else
			new->next = temp->next;
		return (new);
	}
	
	while (i < idx - 1)
	{
		if (temp == NULL)
		{
			free(new);
			return (NULL);
		}
		temp = temp->next;
		i++;
	}
	new->next = temp->next;
	temp->next = new;

	return (new);
}
