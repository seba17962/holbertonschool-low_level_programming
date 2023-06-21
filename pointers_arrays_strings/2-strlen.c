#include "main.h"

/**
 *_strlen - return the length of a string.
 *
 *@s: string
 * Return: the length of a string
 */


int _strlen(char *s)
{
int len = 0;

for (len = 0; *s != '\0'; ++len)
	_putchar(len);

return (0);
}
