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
	size_t copy_size;
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	copy_size = (old_size < new_size) ? old_size : new_size;

	memcpy(new_ptr, ptr, copy_size);

	free(ptr);
	return (new_ptr);
}
