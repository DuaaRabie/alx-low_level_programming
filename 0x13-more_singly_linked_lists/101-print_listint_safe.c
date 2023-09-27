#include "lists.h"

/**
 * print_listint_safe - prints list
 * @head: pointer to first node
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	int count = 0;
	const listint_t *temp = head, *first = head, *loop = NULL;

	if (head == NULL)
		exit(98);


	while (temp->next != loop)
	{
		first = head;
		printf("[%p] %d\n", (void*)temp, temp->n);
		temp = temp->next;
		count++;
		while (first != temp)
		{
			if (temp->next == first)
			{
				loop = temp->next;
				break;
			}
			first = first->next;
		}

	}
	printf("[%p] %d\n", (void *)temp, temp->n);

	if (loop != NULL)
	{
		printf("-> [%p] %d\n", (void*)loop, loop->n);
	}
	

	return (count);

}
