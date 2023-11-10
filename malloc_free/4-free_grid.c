#include "main.h"
/**
 * free_grid - frees a 2 dimensional grid previously
 * @grid: a 2D grid
 * @height: a integer value
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
	{
		exit (0);
	}
	while (i < height)
	{
		free(*(grid + i));
		i++;
	}
	free(grid);
}
