#include "lists.h"
/**
  *add_node_end - adds a node to the end of a list
  *@head: - list start pointer
  *@str: char type param
  *Return: - returns the newly updated list
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;
	size_t len = 0, i;

	if (str == NULL)
		return (NULL);
	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	new_node->str = (char *)malloc(len + 1);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for (i = 0; i <= len; i++)
		new_node->str[i] = str[i];
	new_node->len = len;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}
	return (new_node);
}
