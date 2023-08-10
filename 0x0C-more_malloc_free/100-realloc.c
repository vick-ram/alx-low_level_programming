#include "main.h"
#include <stdlib.h>
/**
  *_realloc - reallocates memory
  *@ptr: - pointer to memory
  *@old_size: - int type param
  *@new_size: - int type param
  *Return: - returns pointer to new address
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned char *old_ptr, *new_ptr_byte;
	unsigned int min_size, i;

	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	old_ptr = (unsigned char *)ptr;
	new_ptr_byte = (unsigned char *)new_ptr;
	min_size = (old_size < new_size) ? old_size : new_size;
	for (i = 0; i < min_size; i++)
	{
		new_ptr_byte[i] = old_ptr[i];
	}
	free(new_ptr);
	return (new_ptr);
}
