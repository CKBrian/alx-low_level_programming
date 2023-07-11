#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Frees a 2D-Grid previously created
 * @grid: Pointer to grid to be freed
 * @height: Size of grid
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
