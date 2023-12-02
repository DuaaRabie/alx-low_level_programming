#include "hash_tables.h"

/**
 * hash_table_get - retrive teh value of associated key
 * @ht: pointer to the hash table
 * @key: the key
 *
 * Return: the value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index])
	{
		if (strcmp(ht->array[index]->key, key) == 0)
			return (ht->array[index]->value);
		else
		{
			temp = ht->array[index];
			while (temp != NULL && strcmp(temp->key, key) != 0)
			{
				temp = temp->next;
			}
			if (temp != NULL && strcmp(temp->key, key) == 0)
				return (temp->value);
		}
	}
	return (NULL);
}
