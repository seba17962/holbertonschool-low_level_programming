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

	while (*s != '\0')
		c++;

	for (; c >= 0; c--)
		_putchar(*s);

	_putchar('\n');

}
