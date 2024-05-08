#include "search_algos.h"
/**
* linear_search - function that performs linear search
* @array: - array type param
* @size: - size of the array
* @value: - value to be searched
* Return: - returns index of value else -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
