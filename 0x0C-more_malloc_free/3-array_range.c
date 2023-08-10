#include "main.h"
#include <stdlib.h>
/**
  *array_range - creates an array of integers
  *@min: - int type param
  *@max: - int type param
  *Return: - return pointer to an array memory
  */
int *array_range(int min, int max)
{
	int i;
	int size = max - min + 1;
	int *arr;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
