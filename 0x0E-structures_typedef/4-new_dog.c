#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *copy_string - copies some strings from dog struct to dog_t
  *@src: - char type paramm
  *Return: - returns a pointer to the copied string
  */
char *copy_string(char *src)
{
	int i, length = 0;
	char *dest;

	if (src == NULL)
		return (NULL);
	while (src[length] != '\0')
		length++;
	dest = (char *)malloc((length + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	for (i = 0; i <= length; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
/**
  *new_dog - craetes a neew dog
  *@name: - char type param
  *@age: - float type param
  *@owner: - char type param
  *Return: returns pointer to dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = (dog_t *)malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = copy_string(name);
	new_dog->owner = copy_string(owner);
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	return (new_dog);
}
