#include "lists.h"
/**
 * delete_nodeint_at_index - del node at index given
 * @head: head of node
 * @index: index of node to del
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *current = *head;
	listint_t *previous = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (current != NULL && x < index)
	{
		previous = current;
		current = current->next;
		x++;
	}

	if (current == NULL)
		return (-1);

	previous->next = current->next;
	free(current);

	return (1);
}
