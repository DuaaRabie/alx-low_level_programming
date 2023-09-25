#include "lists.h"

/**
 * add_nodeint_end - adds new node at the beginning
 * @head: address of the head pointer
 * @n: value of the added node
 * Return: pointer to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp = *head;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}

	newnode->next = NULL;
	newnode->n = n;

	return (newnode);
}
