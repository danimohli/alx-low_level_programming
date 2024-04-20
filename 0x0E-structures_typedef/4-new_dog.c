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
	char *name_c, *owner_c;
	int len, lop;

	if (name)
	{
		len = strlen(name);
		name_c = malloc(sizeof(char) * (len + 1));
		if (name_c == NULL)
		{
			free(name_c);
			return (NULL);
		}
		for (lop = 0; lop < len; lop++)
			name_c[lop] = name[lop];
	}
	if (owner)
	{
		len = strlen(owner);
		owner_c = malloc(sizeof(char) * (len + 1));
		if (owner_c == NULL)
		{
			free(name_c);
			free(owner_c);
			return (NULL);
		}
		for (lop = 0; lop < len; lop++)
			owner_c[lop] = owner[lop];
	}
	new_d = (dog_t *)malloc(sizeof(dog_t));
	if (new_d == NULL)
	{
		free(name_c);
		free(owner_c);
		return (NULL);
	}
	new_d->name = name_c;
	new_d->age = age;
	new_d->owner = owner_c;
	return (new_d);
}
