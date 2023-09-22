#include "lists.h"
#include <string.h>

/**
 * add_node_end - add node to the list
 * @head: the address of head pointer
 * @str: the node value
 * Return: pointer to the new node added
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	char *scopy;

	scopy = malloc(sizeof(char) * strlen(str) + 1);
	if (scopy == NULL)
		return (NULL);
	strcpy(scopy, str);

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(scopy);
		return (NULL);
	}
	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	new->next = NULL;
	new->str = scopy;
	new->len = strlen(scopy);

	return (new);
}
