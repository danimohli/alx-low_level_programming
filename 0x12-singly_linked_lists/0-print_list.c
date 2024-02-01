#include "lists.h"
/**
 * print_list - print all element of list-t
 * @h: list_t head
 * Return: len of list
 */
size_t print_list(const list_t *h)
{
	int x = 0;
	const list_t *t = h;

	while (t != NULL)
	{
		if (t->str)
			printf("[%d] %s\n", t->len, t->str);
		else
			printf("[0] (nil)\n");
		x++;
		t = t->next;
	}
	return (x);
}
