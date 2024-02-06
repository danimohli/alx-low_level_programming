#include "lists.h"
/**
 * free_listint - free memory allocated to nodes of listint_t
 * @head: point to head of list
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
