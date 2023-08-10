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
	void *arr;
	unsigned int i;
	unsigned char *b_ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr != NULL)
		b_ptr = (unsigned char *)arr;
	for (i = 0; i < nmemb * size; i++)
		b_ptr[i] = 0;
	return (arr);
}
