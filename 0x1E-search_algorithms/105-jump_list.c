#include "search_algos.h"
listint_t *jump_forward(listint_t *list, size_t steps);
/**
 * jump_list - Searches for a value in a sorted list of integers
 *             using the Jump search algorithm.
 * @list: A pointer to the head of the list to search.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: A pointer to the first node where the value is located,
 *         or NULL if the value is not present in the list or if head is NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump_step, prev_idx;
	listint_t *node, *prev;

	if (list == NULL || size == 0)
		return (NULL);

	jump_step = sqrt(size);
	prev_idx = 0;
	prev = list;
	node = jump_forward(list, jump_step);
	while (node != NULL && node->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
		prev = node;
		prev_idx = node->index;
		node = jump_forward(node, jump_step);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev_idx,
	node ? node->index : size - 1);
	while (prev != NULL && prev->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
		return (prev);
		prev = prev->next;
	}
	return (NULL);
}

/**
 * jump_forward - Jumps forward a specified number of nodes in a linked list.
 * @list: A pointer to the head of the list.
 * @steps: The number of steps to jump forward.
 *
 * Return: A pointer to the node after jumping forward, or NULL if the end
 *         of the list is reached before completing all steps.
 */
listint_t *jump_forward(listint_t *list, size_t steps)
{
	size_t i;

	for (i = 0; i < steps && list != NULL; i++)
		list = list->next;

	return (list);
}
