#ifndef HASH_TABLE_H
#define HASH_TABLE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct shash_node_s - Node of a sorted hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 * @sprev: A pointer to the previous element of the sorted linked list
 * @snext: A pointer to the next element of the sorted linked list
 */
typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - Sorted hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 * @shead: A pointer to the first element of the sorted linked list
 * @stail: A pointer to the last element of the sorted linked list
 */
typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);
shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);


/**
 * shash_table_set - Adds an element to the sorted hash table
 * @ht: The sorted hash table to add or update the key/value pair
 * @key: The key to add or update
 * @value: The value associated with the key
 * Return: 1 if successful, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int inx;
	shash_node_t *node = NULL, *tp = NULL;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	inx = key_index((const unsigned char *)key, ht->size);

	/* Check if the key already exists, update its value */
	tp = ht->array[inx];
	while (tp != NULL)
	{
		if (strcmp(tp->key, key) == 0)
		{
			/* Free the old value and update with the new value */
			free(tp->value);
			tp->value = strdup(value);
			if (tp->value == NULL)
				return (0);
			return (1);
		}
		tp = tp->next;
	}

	/* Create a new node */
	node = malloc(sizeof(shash_node_t));
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
	/* Add the new node to the sorted linked list */
	if (ht->shead == NULL || strcmp(key, ht->shead->key) < 0)
	{
		node->snext = ht->shead;
		node->sprev = NULL;
		if (ht->shead != NULL)
			ht->shead->sprev = node;
		ht->shead = node;
		if (ht->stail == NULL)
			ht->stail = node;
	}
	else
	{
		tp = ht->shead;
		while (tp->snext != NULL && strcmp(key, tp->snext->key) > 0)
			tp = tp->snext;
		node->snext = tp->snext;
		if (tp->snext != NULL)
			tp->snext->sprev = node;
		tp->snext = node;
		node->sprev = tp;
		if (tp == ht->stail)
			ht->stail = node;
	}
	/* Add the new node to the hash table array */
	node->next = ht->array[inx];
	ht->array[inx] = node;
	return (1);
}
#endif
