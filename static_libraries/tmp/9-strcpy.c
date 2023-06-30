#include "main.h"

/**
 * *_strcpy - copie the string pointed
 *@src: pointer to the string
 *@dest: the destiny of the copy
 *Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
