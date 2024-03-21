#include "lists.h"
/**
 * free_dlistint - free allocated
 * memory for node
 * @head: head of node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head, *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

