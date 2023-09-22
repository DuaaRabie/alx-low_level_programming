#include "lists.h"
#include <string.h>

/**
 * add_node - add node to the list
 * @head: the address of head pointer
 * @str: the node value
 * Return: pointer to the new node added
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
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
	new->next = *head;
	*head = new;
	new->str = scopy;
	new->len = strlen(scopy);

	return (new);
}
