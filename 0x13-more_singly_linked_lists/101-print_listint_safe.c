#include "lists.h"
/**
  *print_listint_safe - prints list
  *@head: - pointer to first node
  *Return: - returns a list
  */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr = head, *node = NULL;
	size_t count = 0;

	while (ptr != NULL)
	{
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		count++;
		if (ptr->next >= node)
		{
			if (node == NULL)
				node = ptr->next;
			else
			{
				printf("-> [%p] %d\n", (void *)ptr->next, ptr->next->n);
				break;
			}
		}
		ptr = ptr->next;
	}
	if (node != NULL)
	{
		printf("-> [%p] %d\n", (void *)node, node->n);
	}
	return (count);
}
