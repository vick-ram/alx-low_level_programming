#include "lists.h"

/**
*print_dlistint - prints elements of a linked list
*@h: first element of a list
*Return: - returns number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
