#include "lists.h"

/**
 * find_listint_loop - find the node loop list started at
 * @head: pointer to first node
 * Return: pointer to the loop node
 */
listint_t *find_listint_loop(listint_t *head)
{
	int count = 0, i = 0, j;
	listint_t *temp = head, *loop = NULL, *array[100];

	if (head == NULL)
		return (loop);


	while (temp->next != loop)
	{
		j = 0;
		temp = temp->next;
		count++;
		array[i] = temp;
		array[i + 1] = NULL;
		while (array[j])
		{
			if (temp->next == array[j])
			{
				loop = temp->next;
				break;
			}
			j++;
		}
		i++;
	}

	return (loop);
}
