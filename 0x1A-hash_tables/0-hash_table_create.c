#include "hash_tables.h"

/**
 * hash_table_create - creats the hash table
 * @size: the size of hash table
 * Return: pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t) * 1);
	
	if (table == NULL)
		return (NULL);

	table->size = size;

	return (table);
}
