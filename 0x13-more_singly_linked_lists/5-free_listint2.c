#include "lists.h"
/**
  *free_listint2 - frees listint_t
  *@head: - pointer to the first node
  *Return: - returns nothing
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
