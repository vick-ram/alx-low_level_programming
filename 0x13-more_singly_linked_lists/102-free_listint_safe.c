#include "lists.h"
/**
  *free_listint_safe - frees listint_t
  *@h: - ponter to first node
  *Return: - returns size of list freed
  */
size_t free_listint_safe(listint_t **h)
{
	listint_t *curr, *next;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);
	curr = *h;
	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		count++;
		if (next >= curr)
		{
			*h = NULL;
			return (count);
		}
		curr = next;
	}
	*h = NULL;
	return (count);
}
