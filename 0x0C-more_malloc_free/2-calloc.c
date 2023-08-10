#include "main.h"
#include <stdlib.h>
/**
  *_calloc - allocates memory of an array using malloc
  *@nmemb: - int type param
  *@size: - int type param
  *Return: - return memory pointer
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int **arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = (int **)malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	return (arr);
}
