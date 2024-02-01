#include "lists.h"
/**
 * add_node_end - add node to end of list
 * @head: head of list
 * @str: new data for new list
 * Return: pointer to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *t = *head, *ptr = (list_t *)malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = NULL;

	if (*head == NULL)
		*head = ptr;
	else
	{
		while (t->next != NULL)
			t = t->next;
		t->next = ptr;
	}
	return (ptr);
}
