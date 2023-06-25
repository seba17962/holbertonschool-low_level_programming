#include "main.h"

/**
 * *_strncat - concatenates two strings.n bytes
 *@src: the string to add.
 *@dest: the destination string.
 *@n: the number of bytes to concatenates of src.
 *Return: a pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len_src = 0;
	int len_dest = 0;

	while (src[len_src] != '\0')
	{
	len_src++;
	}
	while (dest[len_dest] != '\0')
	{
	len_dest++;
	}

	for (i = 0; src[i] != src[n]; i++)
	{
	dest[len_dest + i] = src[i];
	}
	return (dest);
}
