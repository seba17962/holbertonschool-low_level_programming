#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 * @size: the size of the array
 * @c: the inicialized char
 * Return: NULL if size is 0, a pointer or null
 */

char
*create_array(unsigned int size, char c)
{
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	array[0] = c;
	return (array);
}
