#include "hash_tables.h"

/**
 * create_node - creates a new array node
 * @key: the key
 * @value: the value
 * Return: pointer to new node
*/
void *create_node(const char *key, const char *value)
{
	hash_node_t *new = NULL;

	new = malloc(sizeof(hash_node_t) * 1);
	if (new == NULL)
		return (NULL);
	new->key = malloc(sizeof(char) * (strlen(key) + 1));
	if (new->key == NULL)
	{
		free(new);
		return (NULL);
	}
	strcpy(new->key, key);
	new->value = malloc(sizeof(char) * (strlen(value) + 1));
	if (new->value == NULL)
	{
		free(new->value);
		free(new);
		return (NULL);
	}
	strcpy(new->value, value);
	return (new);
}

/**
 * hash_table_set - adds element to the hash table
 * @ht: pointer to the hash table
 * @key: the key
 * @value: the value
 *
 * Return: 1 success | otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new = NULL;
	hash_node_t *temp;

	if (key == NULL || *key == '\0' || ht == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	if ((size_t)index >= ht->size)
		return (0);

	new = create_node(key, value);
	if (new == NULL)
		return (0);

	if (ht->array[index] && key != ht->array[index]->key)
	{
		temp = ht->array[index];
		ht->array[index] = new;
		new->next = temp;
	}
	else
	{
		ht->array[index] = new;
		new->next = NULL;
	}
	return (1);
}
