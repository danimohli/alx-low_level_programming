#include "search_algos.h"
/**
 * jump_search - Searches for a value in a sorted array of integers
 *
 * Using the Jump search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located,
 * Or -1 if the value is not present or the array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size), x;
	size_t left = 0, right = 0;

	if (array == NULL)
		return (-1);

	while (right < size && array[right] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", right, array[right]);
		left = right;
		right += jump;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", left, right);

	for (x = left; x < size && x <= right; x++)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}
	return (-1);
}
