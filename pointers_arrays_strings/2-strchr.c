#include "main.h"

/**
 *_strchr - locate the first ocurrence of a character in a string
 *@s: the string.
 *@c: the char tu locate.
 *Return:the first ocurrence if c it's in the string, else null.
 */

char *_strchr(char *s, char c)
{
	int i;
	char *first_ocurrence;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			first_ocurrence = s;
			return (first_ocurrence);
		}
	}
	return (NULL);
}
