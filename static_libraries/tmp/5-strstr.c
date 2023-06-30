#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: the string.
 * @needle: the string to locate.
 * Return: a pointer to the beginning of the locate substring, or null.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		if (*haystack == *needle)
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
