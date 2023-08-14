#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *free_dog - frees memory
  *@d: - struct type param
  *Return: - returns nothing
  */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		free(d);
		return;
	}
}
