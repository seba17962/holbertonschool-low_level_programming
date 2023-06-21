#include "main.h"

/**
 *print_rev - print a string.
 *
 *@str: string
 *
 */


void print_rev(char *str)
{
	for (*str = '\0'; *str >= 0; *str--)
	{
		_putchar(*str);
	}
_putchar('\n');

}
