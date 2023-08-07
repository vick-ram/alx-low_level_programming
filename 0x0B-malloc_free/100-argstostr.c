#include <stdlib.h>
#include "main.h"
/**
  *argstostr - concatenates all arguments of a program
  *@ac: - param
  *@av: - param
  *Return: - returns pointer to new string
  */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, length = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			length++;
		length++;
	}
	length++;
	result = malloc(sizeof(char) * length + 1);
	if (result == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[k] = av[i][j];
			k++;
			result[k] = '\n';
		}
		result[k] = '\n';
	}
	return (result);
}
