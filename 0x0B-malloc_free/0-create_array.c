#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create array from memory function
 * @size: size of array
 * @c: value to save on each location
 * Return: pointer to location creation or null
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int x;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		ptr[x] = c;
	return (ptr);
}
