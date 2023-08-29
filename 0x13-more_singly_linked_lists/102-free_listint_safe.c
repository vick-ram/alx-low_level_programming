#include "lists.h"
/**
  *free_listint_safe - frees listint_t
  *@h: - ponter to first node
  *Return: - returns size of list freed
  */
size_t free_listint_safe(listint_t **h)
{
	listint_t *curr = *h, *next;
	size_t count = 0;

	while (curr != NULL)
	{
		count++;
		next = curr->next;
		free(curr);
		if (next <= curr)
			break;
		curr = next;
	}
	*h = NULL;
	return (count);
}
