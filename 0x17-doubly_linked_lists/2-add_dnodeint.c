#include "lists.h"
#include <string.h>

/**
 * add_dnodeint_end - add node to the list
 * @head: the address of head pointer
 * @n: the node value
 * Return: pointer to the new node added
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->next = *head;
	*head = new;
	new->n = n;

	return (new);
}
