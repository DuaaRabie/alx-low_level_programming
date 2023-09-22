#include "lists.h"

/**
 * free_list - free list
 * @head: the head pointer
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	while (temp != NULL)
	{
		free(temp->str);
		free(temp);
		temp = temp->next;
	}

}
