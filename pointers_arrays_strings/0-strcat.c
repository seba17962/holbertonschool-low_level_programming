#include "main.h"

/**
 * *_strcat - concatenates two strings.
 *@src: the string to add.
 *@dest: the destination string.
 *Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
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

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[len_dest + i] = src[i];
	}

	dest[len_dest + i] = '\0';

	return (dest);
}
