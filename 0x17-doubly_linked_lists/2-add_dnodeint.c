#include "lists.h"
/**
 * add_dnodeint - add node in a double
 * linked list head
 * @head: head of nodes
 * @n: data to add to new node created
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = *head;

	if (*head != NULL)
		(*head)->prev = node;

	*head = node;

	return (node);
}

