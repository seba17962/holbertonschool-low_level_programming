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

	if (len_src >= len_dest)
	{
		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];
		}
	}

	if (len_src < len_dest)
	{
		for (i = 0; src[i] != dest[len_dest]; i++)
		{
			dest[i] = src[i];
		}
		for (i = 0; dest[i + len_dest] != src[n]; i++)
		{
			dest[i + len_dest] = '\0';
		}
	}
	return (dest);
}
