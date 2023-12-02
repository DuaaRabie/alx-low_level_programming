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
	int check = 0;

	if (ht)
	{
		printf("{");

		for (i = 0; i < ht->size; i++)
		{
			temp = ht->array[i];
			while (temp)
			{
				if (temp && check)
					printf(", ");
				printf("'%s': '%s'", temp->key, temp->value);
				check = 1;
				temp = temp->next;
			}
		}

		printf("}\n");
	}
}
