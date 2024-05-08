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
 * advanced_binary_recursive - Searches for a value in a sorted array of
 *                            integers using the Binary search algorithm.
 * @array: A pointer to the first element of the array to search.
 * @left: The starting index of the subarray to search.
 * @right: The ending index of the subarray to search.
 * @value: The value to search for.
 *
 * Return: The index where the value is located,
 *         or -1 if the value is not present in the array or if array is NULL.
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t middle;

	if (right >= left)
	{
		print_array(array, left, right);
		middle = left + (right - left) / 2;

		if ((middle == left || array[middle - 1] < value) && array[middle] == value)
			return (middle);

		if (array[middle] >= value)
			return (advanced_binary_recursive(array, left, middle, value));

		return (advanced_binary_recursive(array, middle + 1, right, value));
	}

	return (-1);
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located,
 *         or -1 if the value is not present in the array or if array is NULL.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
