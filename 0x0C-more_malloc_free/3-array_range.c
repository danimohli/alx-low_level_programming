#include <stdlib.h>
/**
 * array_range - create a range of array
 * @min: starting point
 * @max: end point
 * Return: pointer to new memory
 */
int *array_range(int min, int max)
{
	int *ptr, x, y;

	if (min > max)
		return (NULL);
	x = (max - min) + 1;
	ptr = malloc(sizeof(int) * x);
	if (ptr == NULL)
		return (NULL);

	for (y = 0; y < x; y++)
		ptr[y] = min++;
	return (ptr);
}
