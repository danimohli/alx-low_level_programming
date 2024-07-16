#include "search_algos.h"
/**
 * jump_list - Searches for a value in a sorted singly linked list
 *
 * using the Jump search algorithm
 * @list: Pointer to the head of the list
 * @size: The number of nodes in the list
 * @value: The value to search for
 *
 * Return: Pointer to the first node where value is located
 *
 * or NULL if value is not present in list or if list is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, prev, x;
	listint_t *current, *prev_node;

	if (list == NULL || size == 0)
		return (NULL);

	step = sqrt(size);
	current = list;

	while (current->index < size && current->n < value)
	{
		prev = current->index;
		prev_node = current;

		for (x = 0; x < step && current->next; x++)
			current = current->next;

		printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);

		if (current->n >= value || current->next == NULL)
			break;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev, current->index);

	current = prev_node;
	while (current && current->index <= size && current->index <= prev + step)
	{
		printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);
		if (current->n == value)
			return (current);
		current = current->next;
	}
	return (NULL);
}
