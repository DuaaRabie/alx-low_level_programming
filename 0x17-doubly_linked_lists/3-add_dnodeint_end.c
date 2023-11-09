#include "lists.h"
#include <string.h>

/**
 * add_dnodeint_end - add node to the list
 * @head: the address of head pointer
 * @n: the node value
 * Return: pointer to the new node added
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp = *head;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (temp == NULL)
		*head = new;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	new->next = NULL;
	new->n = n;

	return (new);
}
