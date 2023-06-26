#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: the string.
 *
 *Return: the string
 */

char *cap_string(char *s)
{
	char sep[14] = " \n\t,;.!?\"(){}";
	int i, j;

	if (s[0] > 96)
	{
		s[0] -= 32;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 14; j++)
		{
			if (sep[j] == s[i - 1] && s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] -= 32;
			}

			else
				break;
		}
	}
	return (s);
}
