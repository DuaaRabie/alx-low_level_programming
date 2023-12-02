#include "hash_tables.h"

/**
 * hash_table_print - prints the hash table
 * @ht: pointer to the hash table
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;

	if (ht)
	{
		printf("{");

		for (i = 0; i < ht->size; i++)
		{
			temp = ht->array[i];

			while (temp)
			{
				printf("'%s': '%s'", temp->key, temp->value);
				if (temp->next && temp->next->next)
					printf(", ");
				temp = temp->next;
			}
			if (temp && i != 0)
				printf(", ");
		}
		printf("}\n");
	}
}
