#include "function_pointers.h"

/**
 * array_iterator - exe a function as  árameter on each elements of an array
 * @array: the array
 * @size: the size of the array
 * @action: a pointer to the function you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i = 0;

	if (!array || !size || !action)
		return;

	for (i = 0; i <= size; i++)
	{
		(*action)(array[i]);
	}
}
