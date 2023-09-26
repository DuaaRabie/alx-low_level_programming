#include "lists.h"

/**
 * free_listint - free list
 * @head: address of first element
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
