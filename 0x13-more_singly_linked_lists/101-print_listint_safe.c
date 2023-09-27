#include "lists.h"

/**
 * print_listint_safe - prints list
 * @head: pointer to first node
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	int count = 0, i = 1, j;
	const listint_t *temp = head, *loop = NULL, *array[200];

	if (head == NULL)
	{
		return (0);
	}
	array[0] = head;
	printf("[%p] %d\n", (void *)temp, temp->n);


	while (temp->next != loop)
	{
		j = 0;
		temp = temp->next;
		array[i] = temp;
		array[i + 1] = NULL;
		while (array[j])
		{
			if (temp->next == array[j])
			{
				loop = array[j];
				break;
			}
			j++;
		}
		printf("[%p] %d\n", (void *)temp, temp->n);
		count++;
		i++;
	}

	if (loop != NULL)
	{
		printf("-> [%p] %d\n", (void *)loop, loop->n);
	}

	return (++count);
}
