#include "main.h"

/**
 *_puts - print a string.
 *
 *@str: string
 *
 */


void _puts(char *str)
{
char leter = -1;

while (*str++)
{
	_putchar(*str);
	leter++;
}
_putchar('\n');

}
