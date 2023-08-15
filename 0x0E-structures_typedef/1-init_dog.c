#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Entry point
 * @d: entered struct
 * @name: new name
 * @age: new age
 * @owner: new owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
