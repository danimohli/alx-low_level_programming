#include <stdlib.h>
/**
 * malloc_checked - creat malloc using malloc
 * @b: amount to memory to return
 * Return: b or 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = (void *)malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
