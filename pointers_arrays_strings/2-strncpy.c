#include "main.h"

/**
 * *_strncpy - copy n bytes of a second strings.
 *@src: the string to copy.
 *@dest: the destination of copy.
 *@n: the number of bytes to copy of src.
 *Return: a pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int len_src = 0;


	while (src[len_src] != '\0')
	{
	len_src++;
	}

	for (i = 0; src[i] != src[n]; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
