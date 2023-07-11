#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * *new_dog - create a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: a pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = NULL;
	int i = 0, len_name = 0, len_owner = 0;

	while (name[len_name] != '\0')
		len_name++;
	while (owner[len_owner] != '\0')
		len_owner++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(sizeof(char) * (len_name + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(sizeof(char) * (len_owner + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	for (i = 0; i <= len_name; i++)
	{
		new_dog->name[i] = name[i];
	}
	for (i = 0; i <= len_owner; i++)
	{
		new_dog->owner[i] = owner[i];
	}

	new_dog->age = age;
	return (new_dog);
}
