#include "lists.h"
/**
  *list_len - calculates the number of elements in a list
  *@h: - list_t type param
  *Return: - returns number of elements
  */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
