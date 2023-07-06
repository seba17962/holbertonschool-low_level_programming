#include "main.h"
#include <stdlib.h>

/**
 *	*str_concat - cocatenate two strings
 *	@s1: the first string.
 *	@s2: the second string.
 *	Return: return a pointer to a space of memory location, or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *s = NULL;
	int len1 = 0, len2 = 0;
	int i = 0;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	s = malloc(sizeof(char) * (len1 + len2));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < len1 + len2; i++)
	{
		if (i < len1)
			s[i] = s1[i];
		if (i >= len1)
			s[i] = s2[i - len1];
	}
	s[len1 + len2] = '\0';

	return (s);
}
