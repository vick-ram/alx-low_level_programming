#include "lists.h"
/**
  *reverse_listint - reverses the list
  *@head: - pointer to first node
  *Return: - returns a reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *curr, *temp;

	curr = *head;
	while (curr != NULL)
	{
		temp = curr->next;
		curr->next = prev;
		prev = curr;
		curr = temp;
	}
	*head = prev;
	return (*head);
}
