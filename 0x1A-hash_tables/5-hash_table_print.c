#include "hash_tables.h"
/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x;
	int fg = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		node = ht->array[x];
		while (node != NULL)
		{
			if (fg == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			fg = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
