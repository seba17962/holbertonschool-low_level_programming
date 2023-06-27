#include "main.h"

/**
 *_strspn - get the length of a prefix substring.
 *@s: the string
 *@accept: segment len of reference.
 *Return: the number of bytes in the initial segment of s which
 *consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	unsigned int j = 0;

	while (accept[i] != '\0')
	{
		i++;
	}

	while (j <= i)
	{
		j++;
	}
	return (j);
}
