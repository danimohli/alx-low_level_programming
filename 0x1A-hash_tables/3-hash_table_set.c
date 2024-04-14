#include "hash_tables.h"
/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table to add or update the key/value pair
 * @key: The key to add or update
 * @value: The value associated with the key
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int inx;
	hash_node_t *node = NULL, *tp = NULL;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	inx = key_ndex((const unsigned char *)key, ht->size);
	/* Check if the key already exists, update its value */
	tp = ht->array[inx];
	while (tp != NULL)
	{
		if (strcmp(tp->key, key) == 0)
		{
			free(tp->value);
			tp->value = strdup(value);
			if (tp->value == NULL)
				return (0);
			return (1);
		}
		tp = tp->next;
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (0);
	}
	/* Add the new node at the beginning of the list */
	node->next = ht->array[inx];
	ht->array[inx] = node;
	return (1);
}
