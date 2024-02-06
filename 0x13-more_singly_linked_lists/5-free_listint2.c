#include "lists.h"
/**
 * free_listint2 - free function
 * @head: pointer to head
 */
void free_listint2(listint_t **head)
{
	listint_t *hd, *d = *head;

	while (d != NULL)
	{
		hd = d->next;
		free(d);
		d = hd;
	}
	*head = NULL;
}
