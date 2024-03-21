#include "lists.h"
/**
 * _delete_dnodeint_at_index - del at index
 * @head: head of lists or nodes
 * @index: indexto del from
 * Return: -1 / 1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *hd = *head;
	unsigned int x;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(hd);
		return (1);
	}

	for (x = 0; hd != NULL && x < index; x++)
		hd = hd->next;

	if (hd == NULL)
		return (-1);

	if (hd->prev != NULL)
		hd->prev->next = hd->next;

	if (hd->next != NULL)
		hd->next->prev = hd->prev;

	free(hd);
	return (1);
}
