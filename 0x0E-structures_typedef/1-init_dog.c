#include "dog.h"
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
	d->name = name;
	d->age = age;
	d->owner = owner;
}
