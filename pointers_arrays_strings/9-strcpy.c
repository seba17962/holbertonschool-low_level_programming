#include "main.h"

/**
 * *_strcpy - copie the string pointed
 *@src: pointer to the string
 *@dest: the destiny of the copy
 *Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *k;

	int i = 0;

	k = src;
	while (k[i] <= '\0')
	{
		i++;
		k++;
		dest[i] = k[i];
	}
	return (dest);
}
