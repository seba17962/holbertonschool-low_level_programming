#include "main.h"

/**
 *rev_string - print a string.
 *
 *@s: string
 *
 */


void rev_string(char *s)
{
	int c = 0;
	char *srev;

	srev = s;

	while (s[c] != '\0')
		c++;

	while (c >= 0)
	{
		c--;
		s[c] = srev[c];
	}
	_putchar('\n');
}
