#include <stdlib.h>
/**
 * array_iterator - loop function
 * @array: pointer to function
 * @action: function pointer
 * @size: size of array
 * Return: void function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array && action != NULL)
	{
		for (x = 0; x < size; x++)
			action(array[x]);
	}
}
