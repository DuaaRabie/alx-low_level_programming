#include "hash_tables.h"

/**
 * key_index - get the key index
 * @key: the key to find the index for
 * @size: size of the array of hash table
 * Return: the key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int djb2 = hash_djb2(key);

	return (djb2 % size);
}
