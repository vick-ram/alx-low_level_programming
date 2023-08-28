#include "lists.h"
/**
  *sum_listint - finds sum of elements in a list
  *@head: - pointer to first element
  *Return: - returns the sum
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
