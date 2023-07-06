#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an arrayy
 * @nmemb: number of elements
 * @size: the size of the elements of nmemb
 * Return: a pointer to a allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *call = NULL;
	unsigned int i = 0;
	unsigned int sum = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	sum = nmemb + size;
	call = malloc(sizeof(char) * sum);

	if (call == NULL)
	{
		free(call);
		return (NULL);
	}
	for (i = 0; i < sum; i++)
	{
		call[i] = 0;
	}
	return (call);
}
