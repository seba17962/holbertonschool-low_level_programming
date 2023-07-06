#include "main.h"
#include <stdlib.h>

/**
 *	*malloc_checked - allocates memori
 *	@b: the bytes of memory
 *	Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(sizeof(char) * b);
		if (mem == NULL)
		{
			exit(98);
		}
	return (mem);
}
