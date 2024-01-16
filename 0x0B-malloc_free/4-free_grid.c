#include <stdlib.h>
/**
 * free_grid - free grid created
 * @grid: point to exiting grid
 * @height: hight of grid to freed
 * Return: void function
 */
void free_grid(int **grid, int height)
{
	int x;

	if (grid != NULL && height > 0)
	{
		for (x = 0; x < height; x++)
		{
			free(grid[x]);
		}
		free(grid);
	}
}
