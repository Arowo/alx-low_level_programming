#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize dog
 * @d: address of struct dog
 * @name: name
 * @age: age
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d || !name || !owner)
	{
		free(d);
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
