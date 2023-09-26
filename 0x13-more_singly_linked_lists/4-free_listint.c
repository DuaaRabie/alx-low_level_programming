#include "lists.h"

/**
 * free_listint - free list
 * @head: address of first element
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp != NULL)
	{
		free(temp);
		temp = temp->next;
	}
}
