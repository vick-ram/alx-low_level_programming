#include "lists.h"

/**
*get_dnodeint_at_index - returns the nth node of list
*@head: - first element of list
*@index: - index to of node
*Return: - returns the pointer to index or null
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr = head;
	unsigned int i;

	for (i = 0; i < index && curr != NULL; i++)
		curr = curr->next;
	if (curr == NULL)
		return (NULL);

	return (curr);
}
