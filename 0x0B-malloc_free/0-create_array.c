#include "main.h"
#include <stdlib.h>
/**
  *create_array - creates an array of characters,
  *and initializes it with specific char
  *@size: - int type param
  *@c: char type param
  *Return: - returns NULL if size is 0 and else returns pointer to an array
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);
	array = (char *)malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
