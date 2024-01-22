#include <string.h>
#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create new dog
 * @name: name of the name dog
 * @age: age of it
 * @owner: onwer of the dog
 * Return: new_dog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;

	new_d = (dog_t *)malloc(sizeof(dog_t));

	if (new_d == NULL)
		return (NULL);

	new_d->name = strdup(name);
	new_d->age = age;
	new_d->owner = strdup(owner);

	return (new_d);
}
