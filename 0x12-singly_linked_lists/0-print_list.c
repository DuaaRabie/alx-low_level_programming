#include "lists.h"

/**
 * print_list - prints lists
 * @h: the head pointer
 * Return: count of printed elements
 */
size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	int count = 0;

	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		count++;
	}

	return (count);
}
