#include "lists.h"
/**
*delete_dnodeint_at_index - delete at a certain index
*@head: - first node
*@index: - index of the node to be deleted
*Return: - returns 1 if success and -1 if failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *curr, *tmp;

	if (head == NULL || *head ==NULL)
		return (-1);
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	curr = *head;
	for (i = 0; i < index && curr != NULL; i++)
		curr = curr->next;
	if (curr == NULL)
		return (-1);
	curr->prev->next = curr->next;
	if (curr->next != NULL)
		curr->next->prev = curr->prev;
	free(curr);
	return (1);
}
