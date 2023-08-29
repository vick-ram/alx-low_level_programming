#include "lists.h"
/**
  *print_listint_safe - prints list
  *@head: - pointer to first node
  *Return: - returns a list
  */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *curr = head, *node = NULL, *start = NULL;
	size_t count = 0;

	while (curr != NULL)
	{
		if (curr == node)
		{
			printf("-> [%p] %d\n", (void *)curr, curr->n);
			exit(98);
		}
		printf("[%p] %d\n", (void *)curr, curr->n);
		count++;
		if (curr->next == start)
		{
			node = start;
			start = NULL;
		}
		curr = curr->next;
	}
	return (count);
}
