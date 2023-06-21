#include "main.h"

/**
 *_strlen - return the length of a string.
 *
 *@str: string
 * Return: the length of a string
 */


int _strlen(char *str)
{
int len = 0;

while (*str++)
	len++;
return (len);
}
