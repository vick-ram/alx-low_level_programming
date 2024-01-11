#include "lists.h"
/**
*sum_dlistint - adds list data
*@head: - first element in a list
*Return: - returns the sum
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head;
	int sum = 0;

	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
