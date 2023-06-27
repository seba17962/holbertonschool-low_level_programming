#include "main.h"

/**
 * _memset - fills memory with a constante byte.
 *@b: the unsigned char to be fills
 *@s: the pointer to the memory area
 *@n: the number of bytes to fills of the memory.
 *Return: the pointer s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
