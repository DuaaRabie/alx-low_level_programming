#include "lists.h"

/**
 * get_dnodeint_at_index - get nth node
 * @index: index of wanted node
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	int count = -1;

	while (temp != NULL)
	{
		count++;
		if (count == (int)index)
			return (temp);
		temp = temp->next;
	}

	return (NULL);
}
