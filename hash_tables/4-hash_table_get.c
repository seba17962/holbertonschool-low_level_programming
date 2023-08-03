#include "hash_tables.h"

/**
 * hash_table_get - get value associated a key in the hash table
 * @ht: addres of a hash table
 * @key: ...
 * Return:
 *	- value associated to key
 *	- NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *srch = NULL;

	if (!ht || !key || *key == '\0')
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);

	srch = ht->array[idx];

	if (!srch)
		return (NULL);

	while (srch && strcmp(key, srch->key) != 0)
		srch = srch->next;

	if (!srch)
		return (NULL);

	return (srch->value);
}
