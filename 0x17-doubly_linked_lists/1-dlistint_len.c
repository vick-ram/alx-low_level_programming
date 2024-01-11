#include "lists.h"

/**
*dlistint_len - returns the number of elements
*@h: - first element in a list
*Return: - returns the number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
