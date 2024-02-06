#include "lists.h"
/**
 * get_nodeint_at_index - get node at index specif
 * @head: point to head node
 * @index: nth of node specify
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num = 0;

	while (head != NULL && num <= index)
	{
		if (num == index)
			return (head);
		num++;
		head = head->next;
	}
	return (NULL);
}
