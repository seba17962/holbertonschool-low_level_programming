#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: the string.
 * @needle: the string to locate.
 * Return: a pointer to the beginning of the locate substring, or null.
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
