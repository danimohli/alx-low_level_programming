#include "lists.h"
/**
 * list_len - count the len of linked list
 * @h: linked list
 * Return: total count
 */
size_t list_len(const list_t *h)
{
	int x = 0;

	while (h != NULL)
	{
		x++;
		h = h->next;
	}
	return (x);
}
