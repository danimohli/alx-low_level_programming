#include "hash_tables.h"
/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size of the array
 * Return: A pointer to the newly created sorted hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *th = NULL;
	unsigned long int x;

	th = malloc(sizeof(shash_table_t));
	if (th == NULL)
		return (NULL);

	th->size = size;
	th->array = malloc(sizeof(shash_node_t *) * size);
	if (th->array == NULL)
	{
		free(th);
		return (NULL);
	}
	for (x = 0; x < size; x++)
		th->array[x] = NULL;

	th->shead = NULL;
	th->stail = NULL;
	return (th);
}

/**
 * shash_table_get - Retrieves a val assocted with a key frm d sorted hsh table
 * @ht: The sorted hash table to look into
 * @key: The key to search for
 * Return: The value associated with the key, or NULL if key couldn't be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int ndx;
	shash_node_t *tp = NULL;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	ndx = key_index((const unsigned char *)key, ht->size);

	/* Traverse the linked list at the calculated index */
	tp = ht->array[ndx];
	while (tp != NULL)
	{
		if (strcmp(tp->key, key) == 0)
			return (tp->value);
		tp = tp->next;
	}
	/* Key not found */
	return (NULL);
}

/**
 * shash_table_print - Prints a sorted hash table using the sorted linked list
 * @ht: The sorted hash table to print
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tp = NULL;

	if (ht == NULL)
		return;

	printf("{");
	for (tp = ht->shead; tp != NULL; tp = tp->snext)
	{
		printf("'%s': '%s'", tp->key, tp->value);

		if (tp->snext != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Print sortd table n rev orda usin d sort link list
 * @ht: The sorted hash table to print
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tp = NULL;

	if (ht == NULL)
		return;

	printf("{");
	for (tp = ht->stail; tp != NULL; tp = tp->sprev)
	{
		printf("'%s': '%s'", tp->key, tp->value);
		if (tp->sprev != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_delete - Deletes a sorted hash table
 * @ht: The sorted hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int x;
	shash_node_t *node, *pt;

	if (ht == NULL)
		return;

	for (x = 0; x < ht->size; x++)
	{
		node = ht->array[x];
		while (node != NULL)
		{
			pt = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = pt;
		}
	}
	free(ht->array);
	free(ht);
}
