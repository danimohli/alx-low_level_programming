#include "search_algos.h"
/**
 * binary_search_helper - Searches for a value in a sorted array
 * using binary search
 * @array: pointer to the first element of the array to search in
 * @left: left index of the subarray to search in
 * @right: right index of the subarray to search in
 * @value: the value to search for
 *
 * Return: the first index where value is located, or -1 if not present
 */
int binary_search_helper(int *array, size_t left, size_t right, int value)
{
	size_t mid, x;

	if (!array)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (x = left; x <= right; x++)
		{
			if (x > left)
				printf(", ");
			printf("%d", array[x]);
		}
		printf("\n");

		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array
 * using exponential search
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: the first index where value is located, or -1 if not present
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, left, right;

	if (!array)
		return (-1);

	if (array[0] == value)
		return (0);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	left = bound / 2;
	right = bound < size ? bound : size - 1;

	printf("Value found between indexes [%ld] and [%ld]\n", left, right);
	return (binary_search_helper(array, left, right, value));
}
