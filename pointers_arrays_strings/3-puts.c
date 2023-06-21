#include "main.h"

/**
 *_puts - print a string.
 *
 *@str: string
 *
 */


void _puts(char *str)
{
char leter = 0;

while (*str != '\n')
{
	_putchar(*str);
	leter++;
}
_putchar('\n');

}
