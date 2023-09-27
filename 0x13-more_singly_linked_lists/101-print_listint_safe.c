#include "lists.h"

/**
 * print_listint_safe - prints list
 * @head: pointer to first node
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	int count = 0, i = 0, j;
	const listint_t *temp = head, *loop = NULL, *array[100];

	if (head == NULL)
		exit(98);


	while (temp->next != loop)
	{
		j = 0;
		printf("[%p] %d\n", (void *)temp, temp->n);
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
	printf("[%p] %d\n", (void *)temp, temp->n);

	if (loop != NULL)
	{
		printf("-> [%p] %d\n", (void *)loop, loop->n);
	}


	return (++count);
}
