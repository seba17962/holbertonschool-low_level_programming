#include "main.h"

/**
 *_memcpy - copie a memory area.
 *@dest: memory destination
 *@src: reference memory area
 *@n: the bytes of memory area to copie.
 *Return: the destination memory area.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

