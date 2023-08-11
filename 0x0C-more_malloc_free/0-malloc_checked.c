#include "main.h"
#include <stdlib.h>
/**
  *malloc_checked - a function that allocates memeory using malloc
  *@b: - integer type param
  *Return: - returns pointer to allocated memory,
  *and if malloc_checked fails terminates normally with status 98
  */
void *malloc_checked(unsigned int b)
{
	void *memory_ptr;

	memory_ptr = malloc(b);
	if (memory_ptr == NULL)
		exit(98);
	return (memory_ptr);
}
