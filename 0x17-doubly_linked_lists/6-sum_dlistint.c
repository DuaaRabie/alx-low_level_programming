#include "lists.h"

/**
 * sum_dlistint - summation of all nodes values
 * @head: header of doubly linked list
 * Return: summation
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
