#ifndef STRUCT_H
#define STRUCT_H
struct dog {
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog_t {
	char *name;
	float age;
	char *owner;
} dog_t;
#endif
