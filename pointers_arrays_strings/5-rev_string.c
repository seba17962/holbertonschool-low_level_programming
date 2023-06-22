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

	while (srev[c] != '\0')
		c++;

	for (c = '\0'; c >= 0; c--)
	{
		*s = srev[c];
	}
	_putchar('\n');
}
