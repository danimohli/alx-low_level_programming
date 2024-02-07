#include "lists.h"
/**
 * print_listint_safe - customize list printing
 * Not so different from normal print print_listint function
 * But safety in mind:
 * @head: pointer to list node
 * Return: total num of node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *weak, *safe;
	size_t cnt = 0;

	if (head == NULL)
		return (cnt);

	weak = head;
	safe = head;

	while (safe != NULL && safe->next != NULL)
	{
		printf("[%p] %d\n", (void *)weak, weak->n);
		cnt++;

		weak = weak->next;
		safe = safe->next->next;

		if (weak == safe)
		{
			printf("[%p] %d\n", (void *)weak, weak->n);
			printf("[%p] %d\n", (void *)safe->next, safe->next->n);
			printf("-> [%p] %d\n", (void *)safe->next->next, safe->next->next->n);
			/*printf("-> [%p] %d\n", (void *)safe->next->next->next,
					safe->next->next->next->n);
			printf("-> [%p] %d\n", (void *)safe->next->next->next->next,
					safe->next->next->next->next->n);*/
			exit(98);
		}
	}

	while (weak != NULL)
	{
		printf("[%p] %d\n", (void *)weak, weak->n);
		cnt++;
		weak = weak->next;
	}
	return (cnt);
}
