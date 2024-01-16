#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - Allocates the memory of size
 * width and height
 *
 * @width: Integer
 * @height: Integer
 * Return: The elements of the grid initialized to 0
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; ++i)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; ++j)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; ++j)
			grid[i][j] = 0;
	}
	return (grid);
}
