#include <stdio.h>
#include <string.h>
#include "dog.h"
/**
 * print_dog - print dog struct function
 * @d: dog struct
 */
void print_dog(struct dog *d)
{

	if (d == NULL)
		return;

	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)");

	printf("Name: %f\n", d->age);

	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)");
}
