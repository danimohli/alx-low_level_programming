#include "search_algos.h"
/**
 * print_array - Prints an array of integers
 * @array: The array to be printed
 * @left: Left index of the subarray to print
 * @right: Right index of the subarray to print
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t x;

	printf("Searching in array: ");
	for (x = left; x <= right; x++)
	{
		if (x > left)
			printf(", ");
		printf("%d", array[x]);
	}
	printf("\n");
}
/**
 * advanced_binary_recursive - Recursively searches for a value in sorted array
 * @array: pointer to the first element of the array to search in
 * @left: left index of the subarray to search in
 * @right: right index of the subarray to search in
 * @value: the value to search for
 *
 * Return: the first index where value is located, or -1 if not present
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (left > right)
		return (-1);

	print_array(array, left, right);
	mid = left + (right - left) / 2;

	if (array[mid] == value && (mid == left || array[mid - 1] != value))
		return (mid);
	else if (array[mid] >= value)
		return (advanced_binary_recursive(array, left, mid, value));
	else
		return (advanced_binary_recursive(array, mid + 1, right, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: the index where value is located, or -1 if not present
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
