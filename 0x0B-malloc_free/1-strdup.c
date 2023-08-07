#include <stdlib.h>
#include "main.h"
/**
  *_strdup - returns a pointer to a newly allocated memory
  *@str: char type pointer
  *Return: - returns NULL if str is empty
  *else returns a pointer to duplicate string
  */
char *_strdup(char *str)
{
	char *arr;
	int len = 0, i;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	arr = (char *)malloc(len + 1);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		arr[i] = str[i];
	}
	return (arr);
}
