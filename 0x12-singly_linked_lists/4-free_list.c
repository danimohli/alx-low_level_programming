#include "lists.h"
/**
 * free_list - free all list
 * @head: pointer to head of list
 * Return: void
 */
void free_list(list_t *head)
{	
	list_t *t;

	while (head != NULL)
	{
		t = head;
		head = head->next;
		free(t->str);
		free(t);
	}
}
