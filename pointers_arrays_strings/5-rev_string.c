#include "main.h"

/**
 *print_rev - print a string.
 *
 *@s: string
 *
 */


void print_rev(char *s)
{
	int c = 0;
	char srev[c];

	while (s[c] != '\0')
		c++;

	while (c > 0)
	{
		c--;
		*s = srev[c];
	}
	_putchar('\n');
}
