#include <stdlib.h>
/**
 * alloc_grid - allocate dimentional memory for array
 * @width: width of the array
 * @height: heighet of array
 * Return: new space that ponitto height and widht
 */
int **alloc_grid(int width, int height)
{
	int **ptr, x, y, z;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int) * height);

	if (ptr == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		ptr[x] = malloc(sizeof(int) * width);
			if (ptr[x] == NULL)
			{
				for (y = 0; y < height; y++)
					free(ptr[y]);
				free(ptr[y]);
				return (NULL);
			}
		for (z = 0; z < width; z++)
			ptr[x][z] = 0;
	}
	return (ptr);
}
