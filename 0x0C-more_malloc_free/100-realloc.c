#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocating memmory from stack to previous allocated memory
 * @ptr: pointer to previous memory
 * @old_size: amount of memory ptr point to
 * @new_size: new size to reallocate to ptr
 * Return: pointer to new memory allocated
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *alloc;

	if (new_size == old_size)
		return (ptr);

	if (ptr && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		alloc = malloc(new_size);
		if (alloc == NULL)
			return (NULL);
		return (alloc);
	}

	alloc = malloc(new_size);
	memcpy(alloc, ptr, old_size);
	free(ptr);
	return (alloc);
}
