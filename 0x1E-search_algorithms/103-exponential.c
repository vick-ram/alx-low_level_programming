#include "search_algos.h"

/**
 * print_array - Prints an array of integers.
 * @array: The array to print.
 * @start: The starting index of the array.
 * @end: The ending index of the array.
 */
void print_array(const int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i < end; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}

/**
 * binary_search_recursive - Searches for a value in a sorted array of
 *                          integers using the Binary search algorithm.
 * @array: A pointer to the first element of the array to search.
 * @left: The starting index of the subarray to search.
 * @right: The ending index of the subarray to search.
 * @value: The value to search for.
 *
 * Return: The index where the value is located,
 *         or -1 if the value is not present in the array or if array is NULL.
 */
int binary_search_recursive(int *array, size_t left, size_t right, int value)
{
	size_t middle;

	if (right >= left)
	{
		print_array(array, left, right);
		middle = left + (right - left) / 2;

		if (array[middle] == value)
			return (middle);

		if (array[middle] > value)
			return (binary_search_recursive(array, left, middle - 1, value));
		return (binary_search_recursive(array, middle + 1, right, value));
	}

	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array of
 *                     integers using the Exponential search algorithm.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located,
 *         or -1 if the value is not present in the array or if array is NULL.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t lower_bound;

	if (array == NULL)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	lower_bound = bound / 2;

	if (bound >= size)
		bound = size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", lower_bound, bound);

	return (binary_search_recursive(array, lower_bound, bound, value));
}
