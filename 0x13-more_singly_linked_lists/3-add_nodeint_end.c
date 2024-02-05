#include "lists.h"
/**
 * add_nodeint_end - add new node to list end
 * @head: pointer to head of node
 * @n: new node to add as last node
 * Return: created node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *hd = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (hd->next != NULL)
		hd = hd->next;

	hd->next = new;
	return (new);
}
