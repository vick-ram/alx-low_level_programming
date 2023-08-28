#include "lists.h"
/**
  *print_listint - prints all elements of a linked list
  *@h: - param of list type
  *Return: - returns printed elemrnts
  */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
