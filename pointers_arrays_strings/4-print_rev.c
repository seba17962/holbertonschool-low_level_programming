#include "main.h"

/**
 *print_rev - print a string.
 *
 *@str: string
 *
 */


void print_rev(char *str)
{
	*str = '\0';
	while (*str)
	{
		_putchar(*str--);
	}
_putchar('\n');

}
