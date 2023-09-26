#include "lists.h"

/**
 * free_listint2 - free list
 * @head: address of first element
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
		}
	
	*head = NULL;
	}
}
