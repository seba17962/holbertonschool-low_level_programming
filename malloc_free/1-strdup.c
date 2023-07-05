#include "main.h"
#include <stdlib.h>

/**
 *	*_strdup - return a pointer to a space in memory with a copy of a string
 *	@str: the string to copy.
 *	Return: a pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	char *s;
	int i, len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	if (str == NULL)
	{
		return (NULL);
	}
	s = malloc(sizeof(char) * len);

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		s[i] = str[i];
	}

	return (s);
}
