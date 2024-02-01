#include "lists.h"
/**
 * add_node - add node to head
 * @head: pointer to liknd list
 * @str: str value tolinkn data
 * Return: address to ne value
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	ptr = (list_t *)malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = NULL;


	if (*head == NULL)
		*head = ptr;
	else
	{
		ptr->next = *head;
		*head = ptr;
	}
	return (ptr);

}
