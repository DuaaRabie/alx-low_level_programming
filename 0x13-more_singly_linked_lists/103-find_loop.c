#include "lists.h"

/**
 * find_listint_loop - find the node loop list started at
 * @head: pointer to first node
 * Return: pointer to the loop node
 */
listint_t *find_listint_loop(listint_t *head)
{
	int i = 1, j;
	listint_t *temp = head, *array[100];

	if (head == NULL)
		return (NULL);

	array[0] = head;
	if (temp->next == temp)
		return (temp);

	while (temp->next != NULL)
	{
		j = 0;
		temp = temp->next;
		array[i] = temp;
		array[i + 1] = NULL;
		while (array[j])
		{
			if (temp->next == array[j])
			{
				return (temp->next);
			}
			j++;
		}
		i++;
	}

	return (NULL);
}
