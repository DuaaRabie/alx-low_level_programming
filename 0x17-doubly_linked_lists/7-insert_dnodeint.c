#include "lists.h"
#include <string.h>

/**
 * insert_dnodeint_at_index - add node to the list
 * @h: the address of head pointer
 * @idx: the index to insert the node
 * @n: the value of the node
 * Return: pointer to the new node added
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *temp = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		*h = new;
		new->prev = NULL;
		if (temp == NULL)
			new->next = NULL;
		else
		{
			new->next = temp;
			temp->prev = new;
		}
		return (new);
	}
	while (i < idx && temp != NULL)
	{
		if (temp == NULL)
		{
			free(new);
			return (NULL);
		}
		temp = temp->next;
		i++;
	}
	new->next = temp;
	new->prev = temp->prev;
	if (temp->prev != NULL)
		temp->prev->next = new;
	temp->prev = new;
	return (new);
}
