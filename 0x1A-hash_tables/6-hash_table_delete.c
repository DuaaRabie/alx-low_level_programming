#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 * @ht: pointer to the hash table
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;

	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			temp = ht->array[i];
			ht->array[i] = ht->array[i]->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
		if (ht->array[i] == NULL)
			free(ht->array[i]);
	}
	free(ht->array);
}
