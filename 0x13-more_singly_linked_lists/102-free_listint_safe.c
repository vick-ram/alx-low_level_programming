#include "lists.h"
/**
  *free_listint_safe - frees listint_t
  *@h: - ponter to first node
  *Return: - returns size of list freed
  */
size_t free_listint_safe(listint_t **h)
{
	listint_t *curr = *h, *temp = *NULL, *mem = NULL;
	size_t count = 0;

	while (curr != NULL)
	{
		count++;
		temp = curr->next;
		if (curr >= mem)
		{
			if (mem == NULL)
				mem = curr;
			else
				break;
		}
		free(curr);
		curr = temp;
	}
	*h = NULL;
	return (count);
}
