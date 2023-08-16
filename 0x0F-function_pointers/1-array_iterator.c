#include "function_pointers.h"
#include <stdio.h>
/**
  *array_iterator - function executes a function
  *@array: - int type param
  *@size: - param
  *@action: - function
  *Return: - returns nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size == 0)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
