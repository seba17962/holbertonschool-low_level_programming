#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * source copy from:
 * https://gist.github.com/papamuziko/7bb52dfbb859fdffc4bd0f95b76f71e8
 * @str: string used to generate hash value
 * Return: hash value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
