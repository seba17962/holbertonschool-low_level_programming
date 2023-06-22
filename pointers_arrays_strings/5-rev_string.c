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
	char rev_string[c];

	while (s[c] != '\0')
		c++;

	while (c > 0)
	{
		c--;
		*s = rev_string[c];
	}
	_putchar('\n');
}
