#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize of type struct dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * @d: a pointer to the struct
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;

}
