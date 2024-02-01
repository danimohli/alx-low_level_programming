#include "lists.h"
/**
 * print_list - print all element of list-t
 * @h: list_t head
 * Return: len of list
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;

	if (h)
	{
		while (h != NULL)
		{
			x += 1;
			if (h->str)
				printf("[%d] %s\n", h->len, h->str);
			else
				printf("[0] (nil)\n");
			h = h->next;
		}
	}
	return (x);
}
