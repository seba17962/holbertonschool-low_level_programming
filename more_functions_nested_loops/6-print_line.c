#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_line - print 'n' times "_"
 *@n: the number of times the character should be repeated
 */

void print_line(int n)
{
	int c = 0;

	if (n != 0)
	{
	while (c <= n)
	{
		_putchar('_');
		c++;
	}
	}
	_putchar('\n');
}
