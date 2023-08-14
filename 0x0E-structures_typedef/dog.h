#ifndef STRUCT_H
#define STRUCT_H
/**
*struct dog - structure type of dog
*@name: -
*@age: -
*@owner: -
*Description: - features of a dog struct
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
  *struct dog_t - structure type of dog
  *@name: -
  *@age: -
  *@owner: -
  *Description: - features of a dog struct
  */
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif
