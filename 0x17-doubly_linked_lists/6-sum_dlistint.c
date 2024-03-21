#include "lists.h"
/**
 * sum_dlistint - sum all node data together
 * @head: head of node
 * Return: summary
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
