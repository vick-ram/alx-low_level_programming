#include "function_pointers.h"
#include <stdlib.h>
/**
  *int_index - seraches for an integer
  *@array: - int type param
  *@size: - int type param
  *@cmp: - int type function param pointer
  *Return: - returns integer
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
