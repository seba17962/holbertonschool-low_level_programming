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

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	s = malloc(sizeof(char) * len - 1);

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}

	return (s);
}
