#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 *print_dog - print a struct dog
 *@d: the pointer to struct dog
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
	}
}
