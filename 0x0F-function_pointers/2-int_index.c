#include <stdlib.h>
/**
 * int_index - search function
 * @array: pointer to array of int
 * @size: len of array
 * @cmp: pointer function
 * Return: -1 and indexof an element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x] != 0))
				return (x);
		}
	}
	return (-1);
}
