#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of
 *               integers using the Jump Search algorithm.
 *
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where the value is located,
 *         or -1 if the value is not present in the array
 *         or if the array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0, i;

	if (!array || size == 0)
		return (-1);

	for (i = prev; prev < size && array[prev] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		i = prev;
		prev += step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i, prev);

	prev = prev < size - 1 ? prev : size - 1;
	for (; i < prev && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
