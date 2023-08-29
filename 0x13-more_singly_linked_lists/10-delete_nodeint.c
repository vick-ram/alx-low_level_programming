#include "lists.h"
/**
  *delete_nodeint_at_index - deletes a node at a given index
  *@head: - pointer to first node
  *@index: - position in a list
  *Return: - returns a newly updated list
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (i = 0, prev = *head; i < index - 1 && prev != NULL; i++)
		prev = prev->next;
	if (prev == NULL || prev->next == NULL)
		return (-1);
	temp = prev->next;
	prev->next = temp->next;
	free(temp);
	return (1);
}
