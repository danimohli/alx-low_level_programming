#include "lists.h"
/**
 * insert_nodeint_at_index - insert node at given index
 * @idx: index to insert at
 * @n: data of new node
 * Return: new nod, NULL
 * @head: point head list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int num = 0;

	listint_t *ptr, *prev;
	listint_t *nod = *head;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}

	while (nod != NULL && num <= idx)
	{
		prev = nod;
		nod = nod->next;
		num++;
	}

	if (num < idx)
	{
		free(ptr);
		return (NULL);
	}

	prev->next = ptr;
	ptr->next = nod;

	return (ptr);
}
