#include "main.h"

/**
 **_strncpy - copy n bytes of a second strings.
 *@src: the string to copy.
 *@dest: the destination of copy.
 *@n: the number of bytes to copy of src.
 *Return: a pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
