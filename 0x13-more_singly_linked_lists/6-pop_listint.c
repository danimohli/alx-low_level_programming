#include "lists.h"
/**
 * pop_listint - pop the head of node
 * @head: pointer to nodes
 * Return: pop node value
 */
int pop_listint(listint_t **head)
{
	listint_t *hed;
	int pop = 0;

	if (*head == NULL)
		return (pop);

	hed = *head;
	pop = hed->n;
	*head = (*head)->next;
	free(hed);

	return (pop);
}
