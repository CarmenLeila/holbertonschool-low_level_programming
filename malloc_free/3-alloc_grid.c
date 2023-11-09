#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int **alloc_grid(int width, int height);

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: integer value
 *
 * @height: integer value
 * Return: integer 2D grid
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)

			grid[i][j] = 0;
	}
	return (grid);
}
