#include "lists.h"
/**
  *get_nodeint_at_index - returns the nth node of a list
  *@head: - first node pointer
  *@index: - position of the node
  *Return: - returns nth node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
