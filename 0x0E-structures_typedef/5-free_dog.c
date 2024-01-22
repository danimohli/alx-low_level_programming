#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free created new dog function
 * @d: dog struct to free
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
}
