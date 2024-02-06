#include "lists.h"
/**
 * sum_listint - sum all value of node in listint_t list
 * @head: point to head list
 * Return: sum of all node
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
