#include "lists.h"

/**
 * pop_listint - free list
 * @head: address of first element
 * Return: nothing
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL || head == NULL)
	{
		return (0);
	}
	temp = *head;
	*head = temp->next;
	n = temp->n;
	free(temp);

	return (n);
}
