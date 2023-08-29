#include "lists.h"
/**
  *reverse_listint - reverses the list
  *@head: - pointer to first node
  *Return: - returns a reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *temp = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		temp = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = temp;
	}
	return (prev);
}
