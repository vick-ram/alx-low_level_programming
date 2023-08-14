#include "dog.h"
#include <stdlib.h>
/**
  *init_dog - initializes struct dog
  *@d: struct type param
  *@name: - char type param
  *@age: - float type param
  *@owner: p- char type param
  *Return: - returns nothing
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(d));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
