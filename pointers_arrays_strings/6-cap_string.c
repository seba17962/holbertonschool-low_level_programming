#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: the string.
 *
 *Return: the string
 */

char *cap_string(char *s)
{
	char sep[14] = {' ', 9, 10, ',', ';', '.', '!', '?', '"', '(',
')', '{', '}'};
	int i, j;

	if (s[0] > 96)
	{
		s[0] = s[0] - 32;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 14; j++)
		{
			if (s[i] == sep[j] && s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] = s[i + 1] - 32;
			}
			/*
			*else if (s[i] == '.' && s[i + 1] == '\n' && s[i + 2] > 96)
			*{
			*	s[i + 2] = s[i + 2] - 32;
			*}
			*/
			else
				break;
		}
	}
	return (s);
}
