#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - free a struct
 * @d: the structur
 */

void free_dog(dog_t *d)
{
	free(d);
}
