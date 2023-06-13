#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * free_grid - frees a 2 dimensional grid of alloc_grid function
 * @grid: the height and width combined
 * @height: the parameter
 * Return: 0
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
