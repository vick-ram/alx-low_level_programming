#include "search_algos.h"
/**
* binary_search - function that performs binary search
* @array: - pointer to te first array element
* @size: -size of the array
* @value: - what to search for
* Return: - returns index of value else -1
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t left = 0, right = size - 1, mid;

	if (array == NULL || size == 0)
		return (-1);

	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
