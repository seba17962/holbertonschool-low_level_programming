#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array to compare
 * @size: the number of elements int the array
 * @cmp: pointer to function to be used to compare values
 * Return: the index of the first elementr that does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!array || !cmp)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
	}
	return (-1);
}
