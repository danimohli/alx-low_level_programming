#include "lists.h"
/**
 * free_listint2 - free function
 * @head: pointer to head
 */
void free_listint2(listint_t **head)
{
	listint_t *hd;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		hd = (*head)->next;
		free(*head);
		*head = hd;
	}
	*head = NULL;
}
