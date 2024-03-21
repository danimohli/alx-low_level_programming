#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at specify index
 * @h: head node
 * @idx: idx specified
 * @n: node to specified
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *hd, *node;
	unsigned int x;

	if (h == NULL || idx == 0)
		return (add_dnodeint(h, n));

	hd = *h;

	for (x = 0; x < idx - 1 && hd != NULL; x++)
		hd = hd->next;

	if (hd == NULL)
		return (NULL);

	node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = hd;
	node->next = hd->next;

	if (hd->next != NULL)
		hd->next->prev = node;
	hd->next = node;

	return (node);
}
