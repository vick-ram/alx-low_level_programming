#include <stdlib.h>
#include "main.h"
/**
  *free_grid - frees 2D grid previously generated
  *@grid: - param
  *@height: - param
  *Return: - returns nothing
  */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
