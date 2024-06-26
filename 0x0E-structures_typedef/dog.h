#ifndef DOG_H
#define DOG_H

#include <string.h>
#include <stdlib.h>
/**
 * struct dog - structure or object for dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
