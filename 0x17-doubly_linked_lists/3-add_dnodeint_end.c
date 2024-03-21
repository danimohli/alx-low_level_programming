#include "lists.h"
/**
 * add_dnodeint_end - add node to end
 * linked list (double linked list)
 * @head: head node
 * @n: data for new node
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *hd, *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
		return (node);
	}

	hd = *head;
	while (hd->next != NULL)
		hd = hd->next;
	hd->next = node;
	node->prev = hd;

	return (node);
}
