#include "hash_tables.h"
/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *node, *tp;

	if (ht == NULL)
		return;

	for (x = 0; x < ht->size; x++)
	{
		node = ht->array[x];
		while (node != NULL)
		{
			tp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = tp;
		}
	}
	free(ht->array);
	free(ht);
}
