#include "lists.h"
/**
  *insert_nodeint_at_index - inserts a new node at a given
  *position
  *@head: - pointer to first node
  *@idx: - position of the node
  *@n: int data type
  *Return: - returns new list
  */
listint_t *insert_nodeint_at_index(listint_t **head,
		unsigned int idx, int n)
{
	listint_t *curr, *new_node;
	size_t i;

	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	curr = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (curr == NULL)
			return (NULL);
		curr = curr->next;
	}
	if (curr == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	new_node->next = curr->next;
	curr->next = new_node;
	return (new_node);
}
