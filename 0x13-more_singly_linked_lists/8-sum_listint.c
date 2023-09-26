#include "lists.h"

/**
 * sum_listint - sum all the data values
 * @head: the pointer
 * Return: the summation of values
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
