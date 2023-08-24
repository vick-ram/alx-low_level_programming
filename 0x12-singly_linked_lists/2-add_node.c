#include "lists.h"
/**
  *add_node - adds new node at the beginning of a list
  *@head: - defines the start of a list
  *@str: - defines the string type
  *Return: - returns ne updated list
  */
list_t *add_node(list_t **head, const char *str)
{
	size_t len = 0, i;
	list_t *new_node;

	if (str == NULL)
		return (NULL);
	new_node = (list_t *)malloc(sizeof(list_t));
	if(new_node == NULL)
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
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
