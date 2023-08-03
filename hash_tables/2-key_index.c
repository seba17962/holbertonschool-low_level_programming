#include "hash_tables.h"

/**
 * key_index - give a index to key
 * @key: ...
 * @size: size of the hash table
 * Return: index where key/value pair is stored in hash table array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (size == 0)
		return (0);

	return (hash_djb2(key) % size);
}
