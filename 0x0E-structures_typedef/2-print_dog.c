#include "dog.h"
#include <stdio.h>
/**
  *print_dog - prints struct
  *@d: - struct type param
  *Return: - returns nothing
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("(nil)\n");
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
