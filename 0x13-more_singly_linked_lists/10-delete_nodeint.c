#include "lists.h"
/**
  *delete_nodeint_at_index - deletes a node at a given index
  *@head: - pointer to first node
  *@index: - position in a list
  *Return: - returns a newly updated list
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *prev, *temp;
	size_t i;

	if (head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	curr = *head;
	prev = NULL;
	for (i = 0; i < index; i++)
	{
		if (curr == NULL)
			return (-1);
		prev = curr;
		curr = curr->next;
	}
	if (curr == NULL)
		return (-1);
	prev->next = curr->next;
	free(curr);
	return (1);
}
