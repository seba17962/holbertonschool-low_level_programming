#include "main.h"

/**
 *print_rev - print a string.
 *
 *@str: string
 *
 */


void print_rev(char *str)
{
	while (*str)
	{
		_putchar(*str--);
	}
_putchar('\n');

}
