#include "lists.h"
/**
 * listint_len - funct counting for total element
 * @h: pointer to listint_t
 * Return: total num of element
 */
size_t listint_len(const listint_t *h)
{
	int sum = 0;

	for  (; h != NULL; h = h->next)
		sum += 1;
	return (sum);
}
