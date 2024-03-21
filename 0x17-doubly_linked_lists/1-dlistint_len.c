#include "lists.h"
/**
 * dlistint_len - count number of nodes in
 * a list
 * @h: head nodes
 * Return: total number of node
 */
size_t dlistint_len(const dlistint_t *h)
{
	int num = 0;

	while (h != NULL)
	{
		num += 1;
		h = h->next;
	}
	return (num);
}
