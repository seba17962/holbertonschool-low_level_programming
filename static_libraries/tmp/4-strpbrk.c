#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string.
 * @accept: the reference string
 * Return: a pointer to the byte in s, or null if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
