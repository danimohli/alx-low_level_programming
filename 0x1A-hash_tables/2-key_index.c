#include "hash_tables.h"
/**
 * key_index - index function for hash
 * @key: name of value
 * @size: size
 * Return: hash value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);
	unsigned long int ind = hash_value % size;

	return (ind);
}
