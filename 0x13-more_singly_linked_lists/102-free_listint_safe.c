#include "lists.h"
/**
  *free_listint_safe - frees listint_t
  *@h: - ponter to first node
  *Return: - returns size of list freed
  */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp = *h, *ptr = *h, *mem;
	size_t count = 1, size = 0, i;

	while (ptr != NULL && ptr->next != NULL)
	{
		ptr = ptr->next->next;
		temp = temp->next;
		if (ptr == temp)
		{
			ptr = ptr->next;
			while (ptr != temp)
			{
				ptr = ptr->next;
				count++;
			}
			ptr = *h;
			for (i = 0; i < count; i++)
			{
				temp = ptr;
				ptr = ptr->next;
			}
			while (ptr != temp)
			{
				temp = ptr;
				ptr = ptr->next;
				free(temp);
				size++;
			}
			*h = NULL;
			return (size);
		}
	}
	while (*h != NULL)
	{
		mem = *h;
		*h = (*h)->next;
		free(mem);
		size++;
	}
	return (size);
}
