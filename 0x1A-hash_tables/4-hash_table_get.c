#include "hash_tables.h"
/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: The hash table to look into
 * @key: The key to search for
 * Return: The value associated with the key, or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int inx;
	hash_node_t *tp = NULL;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	inx = key_index((const unsigned char *)key, ht->size);

	/* Traverse the linked list at the calculated index */
	tp = ht->array[inx];

	while (tp != NULL)
	{
		if (strcmp(tp->key, key) == 0)
			return (tp->value);
		tp = tp->next;
	}

	/* Key not found */
	return (NULL);
}
