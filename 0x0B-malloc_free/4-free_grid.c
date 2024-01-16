#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - Frees the memory
 *
 * @grid: pointer to a pointer
 * @height: Integer
 * Return: None
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
