#include "lists.h"
/**
*insert_dnodeint_at_index - inserts element at certain index
*@h: - first element in a list
*@idx: - index of the list where to insert
*@n: - list data
*Return: - returns pointer to the new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr = (*h), *new_node;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	for (i = 0; i < idx - 1 && curr != NULL; i++)
		curr = curr->next;
	if (curr == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = curr->next;
	if (curr->next != NULL)
		curr->next->prev = new_node;
	curr->next = new_node;
	new_node->prev = curr;
	return (new_node);
}
