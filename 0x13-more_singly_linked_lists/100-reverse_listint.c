#include "lists.h"

/**
 * reverse_listint - reverse the list
 * @head: address to the first pointer
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head, *after = NULL, *prev = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	while (current != NULL)
	{
		after = current->next;
		current->next = prev;
		prev = current;
		current = after;
	}
	*head = prev;

	return (*head);
}
