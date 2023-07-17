#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * init_dog - structure of the dog initialised
 * @d: Pointer to structure
 * @name: pointer to name
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
