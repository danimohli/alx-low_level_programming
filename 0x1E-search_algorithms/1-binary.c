#include "search_algos.h"
/**
 * binary_search - Searches for a value in a sorted array of integers using
 *
 * the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1
 * if the value is not present or the array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, centr;
	size_t x;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (x = left; x <= right; x++)
		{
			printf("%d", array[x]);
			if (x < right)
				printf(", ");
		}
		printf("\n");

		centr = (left + right) / 2;

		if (array[centr] == value)
			return (centr);
		else if (array[centr] < value)
			left = centr + 1;
		else
			right = centr - 1;
	}
	return (-1);
}
