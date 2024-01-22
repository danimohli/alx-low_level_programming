#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print dog initials
 * @d: point to dog structure
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");

		printf("Age: %f\n", d->age);

		if (d->owner)
			printf("Name: %s\n", d->owner);
		else
			printf("Name: (nil)\n");
	}
}
