#include "lists.h"
/**
  *free_list - frees list_t
  *@head: - start of a node list
  *Return: - returns nothing
  */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
