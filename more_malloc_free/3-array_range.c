#include <stdlib.h>
#include "main.h"

/**
 *	array_range - creates an array of integers.
 *	@min: min
 *	@max: max
 *	Return: a pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *ara = NULL;
	int i = 0, sum = 0;

	if (min > max)
		return (NULL);
	sum = max - min + 1;
	ara = malloc(sizeof(int) * sum);

	if (ara == NULL)
		return (NULL);

	for (i = 0; i < sum; i++)
	{
		ara[i] = min + i;
	}
	return (ara);
}
