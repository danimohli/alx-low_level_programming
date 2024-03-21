#include "lists.h"
/**
 * get_dnodeint_at_index - get value of a node specicify
 * @head: head nodes
 * @index: index specified start from 0
 * Return: total number of node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int num = 0;

	while (head != NULL && num <= index)
	{
		if (num == index)
			return (head);
		num += 1;
		head = head->next;
	}
	return (NULL);
}
