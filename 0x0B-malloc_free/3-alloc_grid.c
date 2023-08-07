#include <stdlib.h>
#include "main.h"
/**
  *alloc_grid - returns a pointer to 2D array
  *@width: -
  *@height: -
  *Return: - returns pointer
  */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **myGrid;

	if (width <= 0 || height <= 0)
		return (NULL);
	myGrid = (int **)malloc(height * sizeof(int *));
	if (myGrid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		myGrid[i] = (int *)malloc(width * sizeof(int));
		if (myGrid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(myGrid[i]);
			}
			free(myGrid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			myGrid[i][j] = 0;
		}
	}
	return (myGrid);
}
