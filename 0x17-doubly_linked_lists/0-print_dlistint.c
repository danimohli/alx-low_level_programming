#include "lists.h"
/**
 * print_dlistint - print all nodes data
 * @h: head to node
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num += 1;
		h = h->next;
	}
	return (num);
}
